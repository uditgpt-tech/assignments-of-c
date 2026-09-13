#include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("enter value of a");
//     scanf("%d",&a);
//     b=a/10;
//     if(9<b&&b<100)
//     printf("a is a three digit no.");
//     else
//     printf("a is not a three digit no.");
//     return 0;
    
// }

// int main()
// {
//     int a,b;
//     printf("enter value of a and b: ");
//     scanf("%d %d",&a,&b);
//     if(a>=b)
//     if(a>b)
//     printf("a is greater");
//     else
//     printf("%d",a);
//     else
//     printf("b is greater");
//     return 0;
// }

// int main()
// {
//     int a,b,c,D,x;

//     printf("enter values for a,b&c ");
//     scanf("%d %d %d",&a,&b,&c);
//     a*x*x+b*x+c==0;
//     D=(b*b-4*a*c);
//     if(D)
//     {
//         if(D>0)
//         printf("egn has real and distinct roots");
//         else
//         printf("roots are imaginary");
//     }
//     else
//     printf("roots are real and equal");
//     return 0;

// }

//q4
// int main()
// {
//     int a;
//     printf("enter  value of a: ");
//     scanf("%d",&a);
//     if(a/4==0)
//     {
//         if(a/100==0)
//         {
//             if(a/400==0)
//             printf("a is leap yr"); 
//             else
//             printf("a is not leap yr");                           
//         }
//         else
//         printf("a is  leap year"); 
//     }
//     else
//     printf("a is not leap yr");

//     return 0;

// }

//q5
int main()
{
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c)
    {
        if(a>b&&a>c)
        {
          printf("a is greater");
        }
        else
        printf("%d i am greater",a);
    }
    else
    {
      if(b>=c&&b>=a)
      {
        if(b>c&&b>a)
        printf("b is greater");
        else{
        printf("%d i am greater",b);}
       }
      else
      if(c>=a&&c>=b||a>=b)
      {
        if(c>a&&c>b)
        printf("c is greatest");
        else
        printf("%d",c);
      } 
    }  
    return 0;
}    