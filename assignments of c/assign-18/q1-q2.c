#include<stdio.h>

// int main(){
//     int i,j,a;
    

    
//     for(i=1;i<=4;i++){
        
//         for(j=1;j<=7;j++){
//             if((5-i)<=j && j<=i+3){
//             printf("*");}
//             else{
//             printf(" ");}
//         }
       
//         printf("\n");
//     }
//     return 0;
// }

// int main(){
//     int i,j,a;
    

    
//     for(i=1;i<=4;i++){
        
//         for(j=1;j<=7;j++){
//             if(i<=j && j<=8-i){
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
//     int i,j,a,b;
//     for(i=1;i<=4;i++){
        
//         for(j=1;j<=4;j++){

//             a=5-i;
//             b=3+i;
//             if(a<=j && j<=b){
//             printf("*");
//             printf(" ");}
//             else{
//             printf(" ");}
//         }
       
//         printf("\n");
//     }
//     return 0;
// }


//q4
// int main(){
//     int i,j,a,b;
    
   
    
//     for(i=1;i<=4;i++){
//         a=1;
        
//         for(j=1;j<=7;j++){
//             if((5-i)<=j && j<=i+3){
                
                // if(a>i){
                    
                //     printf("%d",--b);
                //     a++;
                // }
                // else{
                //     if(a==i){
                    
                //         printf("%d",a++);
                //         b=a;
                //         --b;
                //     }
                //     else
                //     printf("%d",a++);
                // }
//             }        
//             else
//             printf(" ");
//         }      
//         printf("\n");
//     }
    
//     return 0;
//}


//q5

// int main(){
//     int i,j,a;
    

    
//     for(i=1;i<=4;i++){
//         a='A';
//         for(j=1;j<=7;j++){
//             if(i<=j && j<=8-i){
//             printf("%c",a++);}
//             else{
//             printf(" ");}
//         }
       
//         printf("\n");
//     }
//     return 0;
// }



// //Q6
// int main(){
//     int i,j,a,b,c=65,d=4;
    
//     for(i=1;i<=4;i++){
        
        
//         a=1;
//         ;
//         c=65;
//         for(j=1;j<=7;j++){
//             if((i)<=j && j<=8-i){
                
//                 if(a>d){
                    
//                     printf("%c",--c);
//                     a++;
//                 }
//                 else{
//                     if(a==d){
                    
//                         printf("%c",c++);
//                         a++;
//                         b=a;
//                         --c;
//                     }
//                     else{
//                     printf("%c",c++);
//                     a++;}
//                 }
//             }        
//             else
//             printf(" ");

//         }      
//         printf("\n");
//         d--;
//     }
    
//     return 0;
// }


// //q7
// int main(){
//     int i,j,a,b;
//     for(i=1;i<=4;i++){
        
//         for(j=1;j<=4;j++){

//             a=5-i;
//             b=3+i;
//             if(a<=j && j<=b){
//             printf("%d",);
//             printf(" ");}
//             else{
//             printf(" ");}
//         }
       
//         printf("\n");
//     }
//     return 0;
// }


//q8
// int main(){
//     int i,j,a,b;
//     for(i=1;i<=4;i++){
        
//         for(j=1;j<=7;j++){

//             a=5-i;
//             b=3+i;
//             if(j<=a || j>=b){
//             printf("*");
//             }
//             else{
//             printf(" ");}
//         }
       
//         printf("\n");
//     }
//     return 0;
// }

//q9
// int main(){
//     int i,j,a,b,c=4,d,count=0;
//     for(i=1;i<=4;i++){
//         d=1;
//         count=0;
//         for(j=1;j<=7;j++){

//             a=5-i;
//             b=3+i;
//             if(j<=a || j>=b){                
                
//                 if(c<j){
                    
//                     printf("%d",d--);
                    
//                 }
//                 else{
//                     if(c==j){
                    
//                         printf("%d",d--);
                        
                        
                        
//                     }
//                     else
//                     printf("%d",d++);

//                 }
//             }
//             else{
//                 count++;
//                 if(count==1){
//                     d++;

//                     printf(" ");
//                 }
//                 else{
//                     printf(" ");
//                 }
//             }
//         }
       
//         printf("\n");
//         --c;
//     }
//     return 0;
// }


int main(){
    int i,j,count,a=4,b,c,d;

    for(i=1;i<=4;i++){
        count=0;
        
        b=65;
        for(j=1;j<=7;j++){
            c=5-i;
            d=3+i;
            if(j<=c || j>=d){

                if(a<j){
                    printf("%c",b--);
                }
                else{
                    if(a==j){
                        printf("%c",b--);

                    }
                    else{
                        printf("%c",b++);
                        
                    }
                }
                
            }
            else{
                count++;
                if(count==1){
                    b++;
                    printf(" ");
                }
                else{
                    printf(" ");
                }
            }
        }

        printf("\n");
        --a;
    }
    return 0;
}






