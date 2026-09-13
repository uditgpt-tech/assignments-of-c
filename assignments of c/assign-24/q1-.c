#include<stdio.h>
#include<math.h>

//q1

// void f1(int ,int );
// int main(){
//     int x,y;
//     printf(" enter values of x and y");
//     scanf("%d%d",&x,&y);

//     f1(x,y);
//     return 0;
// }

// void f1(int a, int b){

//     int count,L,S;
//     L=(a>b?a:b); //LLARGEST NO.
//     S=(a>b?b:a);  //smallest no.
//     S++;

//     while(S<L){   // run till saare prime print na hojaye

//         count=0;
        
//         for(int i=1; i<=S; i++){

//             if(S%i==0){
//                 count++;
//             }
//         }
//         if(count==2){
//             printf("prime no.-%d\n",S);
//         }
//         S++;


//     }
// }

//q2 done in copy

//q3 not done

//q4
// void f1(int, int);
// int main(){
//     int x,y;
//     printf("enter three didgit  no.s");
//     scanf("%d%d",&x,&y);
//     f1(x,y);
//     return 0;
// }
// void f1(int a,int b){
//     int c,L,S,sum;
//     L=(a>b?a:b);
//     S=(a>b?b:a);

//     while((S++) < L){
//   //for(int i=S+1; i<L; i++) 
//         a=S%10;
//         b=(S/10)%10;
//         c=S/100;
//         sum=pow(a,3)+pow(b,3)+pow(c,3);
//         if(sum==S){
//             printf("arm str. no. %d\n",S);
//         }
//     }
// }


//Q5
int f1(int);
int main(){
    int n,sum;
    printf("enter nth term");
    scanf("%d",&n);
    sum=f1(n);
    printf(" final sum is %d",sum);
    return 0;
}
int f1(int a){

    int summ=0,fact=1,j;
    for(int i=1; i<=a; i++){
        
        fact=1;
        j=i;
        while(j){
            fact=fact*j;
            j--;
        }
        summ=summ + (fact/i);
    }
    return summ;
}
