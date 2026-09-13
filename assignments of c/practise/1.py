import math

def calc_area(pts):
    tot = 0
    for i in range(len(pts)):
        j = (i + 1) % len(pts)
        tot += pts[i][0] * pts[j][1]
        tot -= pts[j][0] * pts[i][1]
    return abs(tot) / 2

def get_dir(pts):
    s = 0
    for i in range(len(pts)):
        j = (i + 1) % len(pts)
        s += pts[i][0] * pts[j][1] - pts[j][0] * pts[i][1]
    return -1 if s > 0 else 1

def shrink(pts, h, d):
    edges = []
    for i in range(len(pts)):
        p1 = pts[i]
        p2 = pts[(i + 1) % len(pts)]
        dx = p2[0] - p1[0]
        dy = p2[1] - p1[1]
        
        if dx == 0:
            nx = -1 if (dy > 0 and d == -1) or (dy < 0 and d == 1) else 1
            ny = 0
        else:
            nx = 0
            ny = 1 if (dx > 0 and d == -1) or (dx < 0 and d == 1) else -1
        
        edges.append(((p1[0] + nx * h, p1[1] + ny * h), (p2[0] + nx * h, p2[1] + ny * h)))
    
    new_pts = []
    for i in range(len(pts)):
        prev = (i - 1) % len(pts)
        a1, a2 = edges[prev]
        b1, b2 = edges[i]
        
        dx1 = a2[0] - a1[0]
        dy1 = a2[1] - a1[1]
        dx2 = b2[0] - b1[0]
        dy2 = b2[1] - b1[1]
        
        x1, y1 = a1[0], a1[1]
        x2, y2 = a2[0] + dx1 * 1000, a2[1] + dy1 * 1000
        x3, y3 = b1[0] - dx2 * 1000, b1[1] - dy2 * 1000
        x4, y4 = b2[0], b2[1]
        
        denom = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4)
        
        if abs(denom) < 0.0000000001:
            new_pts.append(a2)
        else:
            t = ((x1 - x3) * (y3 - y4) - (y1 - y3) * (x3 - x4)) / denom
            new_pts.append((x1 + t * (x2 - x1), y1 + t * (y2 - y1)))
    
    return new_pts

def check_ok(pts, h):
    for i in range(len(pts)):
        p1 = pts[i]
        p2 = pts[(i + 1) % len(pts)]
        length = abs(p2[0] - p1[0]) + abs(p2[1] - p1[1])
        if length - 2 * h < 0.099999:
            return False
    return True

n = int(input())
poly = []
for _ in range(n):
    x, y = map(int, input().split())
    poly.append((float(x), float(y)))

min_len = 999999
for i in range(n):
    p1 = poly[i]
    p2 = poly[(i + 1) % n]
    l = abs(p2[0] - p1[0]) + abs(p2[1] - p1[1])
    if l < min_len:
        min_len = l

max_h = (min_len - 0.1) / 2
if max_h < 0:
    max_h = 0
if max_h > 50:
    max_h = 50

steps = int(max_h * 10) + 1
if steps > 1000:
    steps = 1000

best = 0
direction = get_dir(poly)

for s in range(steps + 1):
    height = s * 0.1
    if height > max_h:
        break
    
    if check_ok(poly, height):
        new_poly = shrink(poly, height, direction)
        if len(new_poly) >= 3:
            a = calc_area(new_poly)
            if a > 0:
                v = a * height
                if v > best:
                    best = v

print(f"{best:.2f}")