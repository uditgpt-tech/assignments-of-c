#include<stdio.h>

//q1
// int main(){
//     int i,n,nth,a,b;
//     printf("enter a nth no.");
//     scanf("%d",&nth);
//     a=0;
//     b=1;
//     if(nth==1)
//     printf("%d",a);
//     if(nth==2)
    
//     printf("%d",b);   
    

//     for(i=3;i<=nth;i++)
//     {
//         n=a+b; //a=0 and b=1
//         a=b; //a me jo previous value hai use store kar rahe hai and then
//         b=n;  // b me resultant value store so baad me dubara loop chalane par a me previous value add ho jayegi and
//              // with (resultant value ayo thi)=equal to new resultant value 
        
        
//     }
//     printf("%d",n);
// }

// //q2
// int main(){
//     int i,n,upto_n,a,b;
//     printf("enter a nth no.");
//     scanf("%d",&upto_n);
//     a=0;
//     b=1;
//     if(upto_n>0 && upto_n<=1)
//     printf("%d\n",a);
//     if(upto_n>1)
    
//     printf("%d \n%d\n",a,b);   
    

//     for(i=3;i<=upto_n;i++)
//     {
//         n=a+b; //a=0 and b=1
//         a=b; //a me jo previous value hai use store kar rahe hai and then
//         b=n;  // b me resultant value store so baad me dubara loop chalane par a me previous value add ho jayegi and
//              // with (resultant value ayo thi)=equal to new resultant value 
        
//         printf("%d\n",n);
//     }
//     return 0;
    
// }

//q4
int main(){
    int i,j,n,N,y,x,count=0,sum=0;

    printf("enter an no.");
    scanf("%d",&n);
    x=n;
    N=n;
    while(n){
        n=n/10;
        count++;
    }
    for(i=1;i<=count;i++){
        y=N%10;
        N=N/10;

        int mul=1;
        for(j=1;j<=(count);j++){

            mul=y*mul;
        }
        sum=sum+mul;
    }
    if(x==sum)
    printf("armstrong");
    else 
    printf("not");

}