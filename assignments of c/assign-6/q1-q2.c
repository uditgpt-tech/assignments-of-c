//doubt in q2

// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter the amount in rs- ");
//     scanf("%d",&a);
//     printf("amount in USD is %lf$",a/(84.23));
//     return 0;
// }

// //q2
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter a 3 digit no- ");
//     scanf("%d",&a);
//     printf("after rotating each digit to right side %d",a/)
// }

// //q3
// #include<stdio.h>
// int main()
// {
//     int x;
//     x=10>8>4;//associativity LtoR
//     printf("%d",x);
//     return 0;
    
// }

// //q3
// #include<stdio.h>
// int main()
// {
//     int x;
//     x=!2>-2;
//     printf("%d",x);
//     return 0;
// }

// //q4
// #include<stdio.h>
// int main()
// {
//     int a;
//     a=3<0&&5>0;
//     printf("%d",a);
//     return 0;

// }

//correct answer of q2
#include<stdio.h>
int main()
{
    int a;
    printf("enter a 3 digit no.");
    scanf("%d",&a);
    printf("no. after rotating every digit by one position to right side is %d",(a%10)*100+a/10);
    return 0;

}
