#include<stdio.h>

//Q1 COMPLETED IN COPY
//Q2
// int f1(int, int);
// int main(){
//     int x,y,hcf;
//     printf("enter two no.s");
//     scanf("%d %d",&x,&y);
//     hcf=f1(x,y);
//     printf("%d",hcf);

// }   
// int f1(int a,int b){

//     int store;
//     for(int i=2; i<=a; i++){

//         if(a%i==0 && b%i==0){
//             store=i;
//         }
//     }
//     return store;
// } 


//q4
// int f1(int);
// int main(){

//     int n,Nprime;
//     printf("enter n");
//     scanf("%d",&n);
//     Nprime=f1(n);
//     printf("%d",Nprime);
//     return 0;
// }
// int f1(int a){
//     int count;
//     start:
//         a++;
//         count=0;
//         for(int i=1; i<= a; i++){
            
//             if(a%i==0){
//                 count++;
//             }
//         }
//         if(count==2){
//             return a;
//         }
//         else{
            

//             goto start;}

// }


//q5
void f1(int);
int main(){

    int n;
    printf("enter n");
    scanf("%d",&n);
    f1(n);
    
    return 0;
}
void f1(int a){
    int count,b=2,COUNT=0;
    while(COUNT<a){
        
        count=0;
        for(int i=1; i<=b; i++){
            
            if(b%i==0){
                count++;
            }
        }
        if(count==2){
            printf("%d ",b);
            COUNT++;
        }
        b++;
    }
}