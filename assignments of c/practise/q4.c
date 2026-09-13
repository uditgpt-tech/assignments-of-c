#include<stdio.h>
// int main()
// {
//     int a;
//     printf("age");
//     scanf("%d",&a);
//     if(a>18 || a==18){//using if else  
//         printf("eligible");
//     }
//     else{
//         printf("not eligible");
//     }
//     return 0;
// }

//q5
int main()
{
    int x=0;
    while(x<=6)
    {
        if(x%2)
        x=x-3;
        else
        x=x+5;
        printf("%d",x);
    }
    printf("%d",x);
    return 0;


}