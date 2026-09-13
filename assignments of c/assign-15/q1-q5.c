#include<stdio.h>



//q1
// int main(){
//   int i,num=2,sum,p;
//   for(p=1;p<100;p=num)//used for printing no. till 100
//   {
//     if(num==100){
//       break;
//     }
//     else              //else block used to check a no. is prime 
//     {                 //or not and if its then print it
//       sum=0;
//       for(i=1;i<=num;i++)
//       {
//         if(num%i==0)
//         sum=sum+1;
//       }
//       if(sum>2){          //this if-else check no.of divisors
//         num++;
//       }
//       else{
//         printf("%d\n",num);
//         num++;
//       }
      
//     }  
//   }
//   return 0;
// }  

// //short method

// int main() {
//     int i, num = 2, sum, p;
    
//     while (num < 100) {
//         sum = 0;
//         for (i = 1; i <= num; i++) {
//             if (num % i == 0)
//                 sum++;
//         }
//         if (sum == 2) {
//             printf("%d ", num);  // print prime numbers
//         }
//         num++;
//     }
    
//     return 0;
// }

//q2- prime no. btw 2 no.s
// int main(){
//   int i,sum,num=2,a,b;
//   printf("enter two no. a and b");
//   scanf("%d %d",&a,&b);
//   while(num<b)
//   {
//     sum=0;
//     for(i=1;i<=num;i++)
//     {
//       if(num%i==0){
//         sum++;
//       }

//     }
//     if(sum==2){
//       if(a<num && num<b)
//         printf("%d\n",num);
//     }
//     num++;
//   }
// }


//q3
// int main(){
//   int i,num,sum,a=0;
//   printf("enter a no.");
//   scanf("%d",&num);
  
  
  
//   while(a!=num){
//     num++;
//     sum=0;
//     for(i=1;i<=num;i++){
//       if(num%i==0){
//         sum++;}
//     } 
      
//     if(sum==2){
//       printf("%d",num);
//       a=num;
//     }
    
//   }
  
// }


//q4
// int main(){
//   int i,num,l,s,a,b;
//   printf("enter two numbers: ");
//   scanf("%d %d",&a,&b);
//   if(a>=b){
//     l=a;
//     s=b;
//   }
//   else{
//     l=b;
//     s=a;
//   }
//   for(i=1;i<=s;i++){ // for block ki madad se common factor nikal rahe hai 
    
//     if(l%i==0 && s%i==0) // and since multiple i ki value mil sakti to hum jo sabse badi common value hogi use lenge esliye num me i store karte ja rahe h 
//     num=i;

//   }
//   printf("%d",num);


// }

//q5
int main(){
  int i,sum=0,a,b;
  printf("enter two no.: ");
  scanf("%d %d",&a,&b);

  for(i=1;i<=a;i++)
  {
    if(a%i==0 && b%i==0){
    sum++;}

  }
  if(sum>1){
    printf("given two no.s arent coprime");
  }
  else
  printf(" co prime");
  return 0;

  
}