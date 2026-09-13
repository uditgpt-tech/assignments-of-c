#include<stdio.h>

//q1
// int main()
// {
//     int cp,sp;

//     printf("cost price cp: \nselling price: ");
//     scanf("%d %d",&cp,&sp);
    
//     if(sp>=cp)
//     {
//         if(sp>cp)
//         printf("profit will be %d",sp-cp);
//         else 
//         if(sp=cp)
//         printf("profit and loss both will be %d",sp-cp);
//     }
//     else
//     printf("loss will be %d",cp-sp);
//     return 0;

// }

//q2

// int main()
// {
//     int e,h,s,m,c;
//     printf("marks obtained in english: ");
//     scanf("%d",&e);
//     printf("marks obtained in hindi: ");
//     scanf("%d",&h);
//     printf("marks obtained in science: ");
//     scanf("%d",&s);
//     printf("arks obtained inb maths: ");
//     scanf("%d",&m);
//     printf("marks obtained in computer: ");
//     scanf("%d",&c);
//     if(e>=33&&h>=33&&s>=33&&m>=33&&c>=33)
//     printf("student pass the examination");
//     else
//     printf("student fail in examination");
//     return 0;
    
// }

//q4
int main()
{
    int a;
    printf("enter a no.");
    scanf("%d",&a);
    if(a%2==0&&a%3==0)
    printf("a is divisible by 2 and 3");
    else
    printf("not divisible by 2 and 3");
}


//Q5
// int main()
// {
//     int a;
//     printf("enter a no.");
//     scanf("%d",&a);
//     if(a%7==0&&a%3==0){
//     printf("a is divisible by both 7&3");
//     }
//     else
//     {
//         if(a%7==0)
//         printf("a is divisible by 7");
//         else
//         {
//            if (a%3==0)
//             printf("a is divisible by 3 only");
//            else
//            printf("a is neither divi. by 7 nor by 3");

//         }
//     }    
    
// }