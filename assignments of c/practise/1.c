#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_VERTICES 1000
#define EPS 1e-10

typedef struct {
    double x, y;
} Point;

double polygonArea(Point *points, int n) {
    double area = 0.0;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        area += points[i].x * points[j].y;
        area -= points[j].x * points[i].y;
    }
    return fabs(area) / 2.0;
}

Point lineIntersection(Point p1, Point p2, Point p3, Point p4) {
    double x1 = p1.x, y1 = p1.y;
    double dx1 = p2.x - p1.x, dy1 = p2.y - p1.y;
    double x2 = p3.x, y2 = p3.y;
    double dx2 = p4.x - p3.x, dy2 = p4.y - p3.y;
    
    double denom = dx1 * dy2 - dy1 * dx2;
    
    Point result;
    if (fabs(denom) < EPS) {
        result = p2;
    } else {
        double t = ((x2 - x1) * dy2 - (y2 - y1) * dx2) / denom;
        result.x = x1 + t * dx1;
        result.y = y1 + t * dy1;
    }
    
    return result;
}

int isValidPolygon(Point *points, int n) {
    double area = polygonArea(points, n);
    if (area < EPS) return 0;
    
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        double dx = points[j].x - points[i].x;
        double dy = points[j].y - points[i].y;
        double len = sqrt(dx * dx + dy * dy);
        if (len < 0.1 - EPS) return 0;
    }
    
    return 1;
}

int offsetPolygon(Point *points, int n, double offset, Point *result) {
    typedef struct {
        Point p1, p2;
    } Edge;
    
    Edge *edges = (Edge *)malloc(n * sizeof(Edge));
    
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        double dx = points[j].x - points[i].x;
        double dy = points[j].y - points[i].y;
        double len = sqrt(dx * dx + dy * dy);
        
        if (len < EPS) {
            free(edges);
            return 0;
        }
        
        double nx = -dy / len;
        double ny = dx / len;
        
        edges[i].p1.x = points[i].x + nx * offset;
        edges[i].p1.y = points[i].y + ny * offset;
        edges[i].p2.x = points[j].x + nx * offset;
        edges[i].p2.y = points[j].y + ny * offset;
    }
    
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        result[i] = lineIntersection(edges[i].p1, edges[i].p2, 
                                      edges[j].p1, edges[j].p2);
    }
    
    free(edges);
    return 1;
}

double calculateVolume(Point *points, int n, double h) {
    if (h <= 0) return 0.0;
    
    Point *offsetPoints = (Point *)malloc(n * sizeof(Point));
    
    if (!offsetPolygon(points, n, h, offsetPoints)) {
        free(offsetPoints);
        return 0.0;
    }
    
    if (!isValidPolygon(offsetPoints, n)) {
        free(offsetPoints);
        return 0.0;
    }
    
    double area = polygonArea(offsetPoints, n);
    free(offsetPoints);
    
    if (area <= 0) return 0.0;
    return area * h;
}

double minEdgeLength(Point *points, int n) {
    double minLen = 1e9;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n;
        double dx = points[j].x - points[i].x;
        double dy = points[j].y - points[i].y;
        double len = sqrt(dx * dx + dy * dy);
        if (len < minLen) minLen = len;
    }
    return minLen;
}

double findMaxVolume(Point *points, int n) {
    double maxH = minEdgeLength(points, n) / 2.0;
    
    double maxVolume = 0.0;
    double bestH = 0.0;
    
    for (double h = 0.1; h <= maxH; h += 0.1) {
        double vol = calculateVolume(points, n, h);
        
        if (vol > maxVolume) {
            maxVolume = vol;
            bestH = h;
        }
    }
    
    return maxVolume;
}

int main() {
    int n;
    Point points[MAX_VERTICES];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &points[i].x, &points[i].y);
    }
    
    double maxVolume = findMaxVolume(points, n);
    
    printf("%.2f\n", maxVolume);
 
    
    
    return 0;
}