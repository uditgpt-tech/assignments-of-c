#include<stdio.h>

//q1
// int main(){
//     int i,sum=0;
//     printf("enter upto i natural no.s");
//     scanf("%d",&i);

//     while(i){
//         sum=sum+i;
//         i--;
//     }
//     printf("%d",sum);
//     return 0;
// }


//q2
// int main()
// {
//     int sum=0,i,n=0;
//     printf("enter i value");
//     scanf("%d",&i);

//     while(n<=(2*i-2)){
//         sum=sum+n;
//         n=n+2;

//     }
//     printf("%d",sum);

// }

// int main(){
//     int i,sum=0,n=1;
//     printf("enter a i");
//     scanf("%d",&i);
//     while(n<=(2*i-1)){
//         sum=sum+n;
//         n=n+2;
//     }
//     printf("%d",sum);
// }


int main(){
    int i,sum=0,n;

    printf("enter i");
    scanf("%d",&i);

    while(i){
        sum=sum+i*i;
        i--;
    }
    printf("%d",sum);
}