#include<stdio.h>
 

//q1,'q2.q3,q4 completed

//q5

void f1(int);
int main(){

    int n;
    printf(" enter value of n");
    scanf("%d",&n);
    f1(n);
    return 0;

}

void f1(int a){

//     int count;
//     printf(" the factors of no. n are:\n");

//     for(int i=2; i<=a; i++){
//         count=0;
//         if(a%i==0){
//             for(int j=1; j<=i; j++){

//                 if(i%j==0){
//                     count++;
//                 }
//             }
//             if(count==2){
//                 printf("%d",i);
//                 a=a/i;
//                 i--;
//             }
//         }
//     }

// }          
              //or

    int count;
    printf("factors are:\n");

    for (int i = 2; i * i <= a; i++) {
        while (a % i == 0) {
            printf("%d ", i);
            a = a / i;
        }
    }

    // if n is still greater than 1, it is a prime factor
    if (a > 1) {
        printf("%d", a);
    }

    
}