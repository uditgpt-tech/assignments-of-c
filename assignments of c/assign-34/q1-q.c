#include<stdio.h>
#include<string.h>

//q1 to cal. length of string
// int main(){
//     int    count=0;
//     char name[4] = "udit";
//     for(int i=0 ; name[i] ;i++){
//         count++;
//     }
//     printf("length = %d",count);
// }
//q2
int main(){
    char str[7]="uiditi";
    char d,count=0;
    for(int j=0; str[j]; j++){
        int duplicate=0;
        for(int k=0;k<j; k++){
            if(str[k]==str[j]){
                duplicate=1;         //secod forloop and if eis used for neglecting the char. which is already counted
                break;    
            }
        }
        if(duplicate){
            continue;
        }

        d=str[j];
        count=0;
        for(int i=0; str[i] ;i++){
            if(d==str[i]){
                count++;
            } 
        }
        printf("count of %c is%d\n",d,count); 
    }
}  

////q3
// int main(){
//     char str[7]="uiditie";
//     char d,
//     int count=0;
//     for(int j=0; str[j]; j++){
//         int duplicate=0;
//         for(int k=0;k<j; k++){
//             if(str[k]==str[j]){
//                 duplicate=1;
//                 break;
//             }
//         }
//         if(duplicate){
//             continue;
//         }


        
//         if(str[j]== 'a' ||str[j]== 'e' || str[j]=='i'|| str[j]== 'o' || str[j]=='u' ){
//             printf(" %c is a vowel\n",str[j]);
                
//         }
        
        
//     }
// } 

//q4
// int main(){
//     char brr[]="udit gupta singh";
//     int count=0,i;
//     for(int i=0 ; brr[i]!= '\0'; i++){
//         if(brr[i]==' '){
//             count++;
//         }
//     }
//     printf(" spaces count=%d",count);


// }

//q5
int main(){

    char crr[]="udit gupta";
    

    for(int i=0; crr[i]; i++){
        crr[i]=crr[i]-32;
        printf("%c",crr[i]);
    }
}