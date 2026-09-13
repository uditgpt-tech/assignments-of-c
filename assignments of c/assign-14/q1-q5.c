#include<stdio.h>


//q1
// int main(){
//     int i,n=1;
//     printf("enter a no. ");
//     scanf("%d",&i);
//     for(i;i>0;i--)
//     {
//         n=n*i;
//     }
//     printf("factorial is %d",n);
//     return 0;
// }


//q2
// int main(){
//     int div,i;
//     printf("enter A no. ");
//     scanf("%d",&div);
    
//     for(i=0;i>=0 ;i++)
//     {
//         div=div/10;
        
//         if(div==0)
//         break;
        
//     }
//     printf("digits are %d",i=i+1);
    
//     return 0;
// }

//or
int main{


   int count=0,i=1,n;
   printf("enter a digit");
   scanf("%d",&n);
   while(n>0)
   {
    n=n/10;
    count++;
   }
   printf("%d",count);
}   



//q3
// int main(){
//     int i,num,sum=0;
//     printf("enter a no. ");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++)
//     {
//         if(num%i==0)
//         sum=sum+1;


//     }
//     if(sum>2)
//     printf("its not a prime ");
//     else
//     printf("its a prime");
//     return 0;
// }


//q4
int main(){
    int a,b,L,S,i;
    printf("enter value for a and b:");
    scanf("%d %d",&a,&b);
    if(a>=b){
    L=a;
    S=b;}

    else{
    L=b;
    S=a;}

    for(i=1;i>0;i++){
        if(L*i%S==0){
            printf("lcm will be %d",L*i);
            break;
        }
    }
    return 0;   
    
}