#include<stdio.h>

//q1
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j<=i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


//q2
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j>=6-i){
//             printf("*");}
//             else{
//             printf(" ");}
//         }
//         printf("\n");
//     }
//     return 0;
// }

//q3
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j<=6-i){
//             printf("*");}
//             else{
//             printf(" ");}
//         }
//         printf("\n");
//     }
//     return 0;
// }

//q5
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j<=i){
//             printf("%d",j);}
//             else{
//             printf(" ");}
//         }
//         printf("\n");
//     }
//     return 0;
// }


// //q6
// int main(){
//     int i,j,a;
    
//     for(i=1;i<=5;i++){
//         a=i;
//         for(j=1;j<=5;j++){
//             if(j<=i){
//             printf("%d",a--);}
//             else{
//             printf(" ");}
//         }
//         printf("\n");
//     }
//     return 0;
// }


//q7
// int main(){
//     int i,j,a;

    
//     for(i=1;i<=5;i++){
//         a='A';
//         for(j=1;j<=5;j++){
//             if(j>=i){
//             printf("%c",a++);}
//             else{
//             printf(" ");}
//         }
//         printf("\n");
//     }
//     return 0;
// }

//q8
// int main(){
//     int i,j,a=1;

    
//     for(i=1;i<=4;i++){
        
//         for(j=1;j<=4;j++){
//             if(j<=i){
//             printf("%d",a++);}
//             else{
//             printf(" ");}
//         }
//         printf("\n");
//     }
//     return 0;
// }

//q9
// int main(){
//     int i,j,b='A',a;
//     a=b;

    
//     for(i=1;i<=5;i++){
        
//         for(j=1;j<=5;j++){
//             if(j>=i){
//             printf("%c",a++);}
//             else{
//             printf(" ");}
//         }
//         ++b;
//         a=b;
//         printf("\n");
//     }
//     return 0;
// }


//q10
int main(){
    int i,j;

    
    for(i=1;i<=5;i++){
        
        for(j=1;j<=5;j++){
            if(i==1 || i==5){   //used to print 1st and last line
                if(j>=i || j<=i){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }    
            else{
                if(j==1 || j==5){
                    printf("*");          //to print 2,3,4th lines
                }
                else{
                    printf(" ");
                }
            }    
        }
        printf("\n");
    }
    return 0;
}