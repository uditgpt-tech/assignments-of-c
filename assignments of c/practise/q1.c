#include<stdio.h>
// // int main()
// // {
// //     int a,b;
// //     printf("enter values");
// //     scanf("%d %d",&a,&b);
// //     printf("sum of \"%d\" and \"%d\" is \"%d\"",a,b,(a+b)/2);
// // }    

// int main(){

//     int count=0,n;
//     printf("enter a no.");
//     scanf("%d",&n);
//     printf("factors are-\n");

//     for(int i=2; i<=n; i++){
//         count=0;
//         if(n%i==0){

//             for(int j=1; j<=i; j++){

//                 if(i%j==0){
//                     count++;
//                 }
//             }
//             if(count==2){
//                 printf("%d",i);

//                 n=n/i;
//                 i--;
                
                
                
//             }
//         }
//     }

// }


// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printf("Prime factors are:\n");

//     for (int i = 2; i * i <= n; i++) {
//         while (n % i == 0) {
//             printf("%d ", i);
//             n = n / i;
//         }
//     }

//     // if n is still greater than 1, it is a prime factor
//     if (n > 1) {
//         printf("%d", n);
//     }

//     return 0;
// }




//
int main(){
    int a[8];
    int num=7,k=0,b;
    printf("enter 8 no.s");
    for(int i=0; i<=7; i++){
        scanf("%d",&a[i]);
        
    }
    for(int j=0; j<=6; j++){
        int p=k+1;
        while(p<=(num)){

            
            b=a[p];
            if(a[k]>a[p]){
                a[p]=a[k];
                a[k]=b;
                p++;
            }
            else{
              p++;}
            
            
        }
        

        k++;
        
    }
    

    for(int q=0; q<=7; q++){
        printf("%d ",a[q]);
    }
}    