#include<stdio.h>
#include<math.h>

//q1
// int main(){
//     int x;
//     printf("enter valueof x");
//     scanf("%d",&x);

//     switch(x){

//         case 1:
//         printf("31");
//         break;
//         case 2:
//         printf("28 or 29");
//         break;
//         case 3:
//         printf("31");
//         break;
//         case 4:
//         printf("30");
//         break;
//         case 5:
//         printf("31");
//         break;
//         case 6:
//         printf("30");
//         break;
//         case 7:
//         printf("31");
//         break;
//         case 8:
//         printf("31");
//         break;
//         case 9:
//         printf("30");
//         break;
//         case 10:
//         printf("31");
//         break;
//         case 11:
//         printf("30");
//         break;
//         case 12:
//         printf("31");
    
//     }
//     return 0;
// }


//q2
// int main()
// {
//     int x;
//     printf("enter 1 for addtion\n");
//     printf("enter 2 for sub.\n");
//     printf("enter 3 for multi.\n");
//     printf(" enter 4 for divi.\n");
//     printf("enter 5 for exit\n");
//     scanf("%d",&x);

//     switch(x){
//         case 1:
//         printf("add");
//         break;
//         case 3:
//         printf("multi");
//         break;
//         case 2:
//         printf("sub");
//         break;
//         case 4:
//         printf("div");
//         break;
//         case 5:
//         printf("exit");
//     }
// }

//q3
// int main(){
//     int x,a,b,c;

//     printf("enter length of a ,b ,c");
//     scanf("%d%d%d",&a,&b,&c);
  

//     printf("1 for checking isos.\n");
//     printf("2 for right angle\n");
//     printf("3 for equilan\n");
//     printf("4 for exit\n");
//     scanf("%d",&x);

    

//     switch(x){

//         case 1:
//         if(((a==b)&&(b!=c)) || ((b==c)&&(a!=c)) || ((a==c)&&(a!=b))){
//             printf("yes its isos tria.");
//         }
//         else{
//         printf("its not an isos.");}
        
//         break;
//         case 2:
//         if((pow(a,2)==pow(b,2)+pow(c,2)) || (pow(b,2)==pow(a,2)+pow(c,2)) ||(pow(c,2)==pow(a,2)+pow(b,2))){
//             printf("yes its an right angle tri");
//         }
//         else{
//         printf(" not an R.angle tri");}
//         break;
//         case 3:
//         if(a==b&& b==c&& c==a){
//             printf("yes its equi. tria.");
//         }
//         else{
//         printf(" not an equi.");}
//         break;

//         case 4:
//         printf("Exit");
//     }
//     return 0;
// }

//q5
int main(){
    int var;
    printf("enter value of var");
    scanf("%d",&var);

    switch(var){
        case 1:
        printf("good");
        break;

        case 2:
        printf("better");
        break;

        case 3:
        printf("best");
        break;

        default:
        printf("inavlid");

    }
}