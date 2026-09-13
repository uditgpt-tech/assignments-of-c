#include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter a no.");
//     scanf("%d",&a);
//     b=a-((a/10)*10);
//     if (b==0 || b==2||b==4||b==6||b==8)

//     {
//         printf("no. is even");
//     }
//     else
//     printf("it is odd");
    
// 
// int main(){
//     int a=4,b=4;
//     if(a>=b){
//         if(a>b){
//             printf("a is big");
//         }
//         else
//         printf("%d",a);
//     }
//     else
//     printf("b is big");
// }

// int main(){
//     int a;
//     printf("enter ayr");
//     scanf("%d",&a);
//     if(a%100==0){
//         if(a%4==0&&a%400==0){
//             printf("leap");
//         }
//         else
//         printf("not a leap");
//     }
//     else{
//         if(a%4==0)
//         printf("leap");
       
//         else
//         printf("not a leap");}
// }
// int main(){
//     int a;
//     printf("enter a n yr");
//     scanf("%d",&a);

//     (a%400==0)||(a%4==0&&a%100!=0)?printf("leap"):printf("not leap");

// }
// int main(){
//     int a,b,c;
//     printf("enter three no.s");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>=b||a>=c){
//         if(a>b&&a>c){
//             printf("a is largest");
//         }
//         else
//         printf("%d",a);
//     }
//     else{
//         if(a>=b || c>b){
//             if(c>a)
//             printf("c is great");
//             else
//             printf("%d",c);
//         }
//         else if(a<b&&b>c)
//         printf("b isgreat");
//         else
//         printf("%d",b);
//     }
// }

int main(){
//     int a;
//     printf("enter no.");
//     scanf("%d",&a);
//     if(a%2==0){
//         if(a%2==0 && a!=2)
//         printf("30 days");
//         else  
//         printf("28 or 29 days");

//     }
//     else
//     printf("31days"); 
// }


//    int i=1,sum=0,n;
//    printf("enter a no.");
//    scanf("%d",&n);
//    while(i<=2*n-1){
//        sum=sum+i;
    
//        i=i+2;
//    }
//    printf("%d",sum);
// }  

//    int i=1,sum=0,n,p;
//    printf("enter a no.");
//    scanf("%d",&n);
//    while(i<=n){
//     p=i*i;
//     sum=sum+p;
//     i++;
//    }
//    printf("%d",sum);
// }

//    int i,fact=1,n;
//    printf("enter a no.");
//    scanf("%d",&n);
//    while(n>0){
//     fact=fact*n;
//     n=n-1;

//    }
//    printf("%d",fact);
// }


//   int a,b,G,k=1,L,i;
//   printf("enter a no.");
//   scanf("%d %d",&a,&b);
//   if(a>b){
//     G=a;
//     L=b;
//   }
//   else
//   G=b;
//   L=a;
//   for(i=1;i<=L;i++){
//     if(a%i==0 && b%i==0)
//     k=k*i;
//   }
//   printf("LCM %d",(a*b)/k);
// }

//q5 -14
  //  int n,count=0,i,N=0;
  //  printf("enter a no.");
  //  scanf("%d",&n);
  //  while(n!=0){
  //   n=n/10;
  //   count++;
  //  }
   
  //  for(i=0;i<=count;i++){
  //   for(j=0;j<=count;i++){
  //     a=n%1;
  //   }
    
  //   n=n*10;
  //  }
  //  count--;
  //  printf("%d",N);

  // }   

  //-15
//  q1
//    int i,num=2,count=0;
//    while(num<=100){
//     for(i=1;i<=num;i++){
//       if(num%i==0){
//         count++;
//       }
      
//     }
//     if(count==2){
//       printf("prime-%d\n",num);
//     }
//     num++;
//     count=0;

//   }
// }  

//q1
//    int i,nth,a=0,b=0,c;
//    printf("enter nth no. of time to print");
//    scanf("%d",nth);
//    if(nth==1){
//     printf("0");
//    }
   
//     for(i=2;i<=nth;i++){
//       c=a+b;
//       b=a;
//       a=c;
//       printf("%d ",c);

//     }
  
// }   

//    int i,nth,a=0,b=1,c;
//    printf("enter nth no. of time to print");
//    scanf("%d",&nth);
//    if(nth==1){
//     printf("0");
//    }
   
//    for(i=2;i<=nth;i++){
//      c=a+b;
//      b=a;
//      a=c;
//    }
//    printf("%d",c); 
// }   



   int i,nth,a=0,b=1,c;
   printf("enter no. which has to be checked");
   scanf("%d",&nth);
   if(nth==0){
    printf("yes in fibo.");
   }
   else{
   
   for(i=1;i<=nth+1;i++){
     c=a+b;
     b=a;
     a=c;
     
   }
   if(c==nth){
    printf("in febo.");
   }
   else
   printf("not in fibo.");}
}   


   int i,count,n;
   printf("enter a digit: ");
   scanf("%d",&n);
   a=n;
   while(n!=0){
    n=n/10;
    count++;
   }
   for(i=1;1<=count;i++){

    a=a%10;
    p=a*a*a;

   }




 