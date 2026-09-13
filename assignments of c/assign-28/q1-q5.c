#include<stdio.h>

//q1
// int fact(int);
// int main(){
//      int n;
//      printf("enter a n");
//      scanf("%d",&n);
     
//      printf("%d",fact(n));
// }

// int fact(int x){

//     if(x==1){
//         return 1;

//     }
//     return x*fact(x-1);


// }

//q2

int main(){

    int n;
    int tar;
    printf("enter size of an array");
    scanf("%d",&n);
    int arr[n];
    printf("traget");
    scanf("%d",&tar);

    for(int i=0; i<=n-1 ;i++){

        scanf("%d",&arr[i]);
    }
    for(int j=0 ;j<=n-1; j++){

        for(int k=0 ;k<=n-1 ;k++){

            if(arr[j]+arr[k]==tar){
                int brr[]= {j,k};
                for(int l=0; l<2;l++){
                    printf("%d",brr[l]);
                }
            }
        }
    }
    return 0;
} 
