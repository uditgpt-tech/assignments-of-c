#include<stdio.h>
void f3(int);

void f3(int a){

    int i=1;
    while(i<= (2*a-1)){
        printf("%d",i);
        i=i+2;
    }
}

int main(){

    int n;

    printf("enter n");
    scanf("%d",&n);

    f3(n);
    return 0;
}


