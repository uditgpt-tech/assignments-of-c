 

//q2


// #include<stdio.h>
// int main()
// {
//     int m=sizeof(4);
//     printf("size of integer constant %d",m);
//     return 0;
// }
//
//  

//Q4

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("enter value of A: \n");
//     printf("enter value of B: ");
    
//     scanf("%d %d",&a,&b);
    
       
//     printf("before swapping (%d,%d)\n after swapping(%d,%d)",a,b,b,a);
    
//     return 0;/* ye sochne ka tareeka accha h par
//                ques. ke according answer galat hai*/
// }
// // }//error!
//  //q5
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("enter value of a: \n\r ");
//     printf("enter the value of b: ");
//     scanf("%d %d",&a,&b);
//     printf("before swapping (%d,%d)",a,b);
     
//     printf("after swapping (%d,%d)",(b,a));
//     return 0;
    
// }

// #include<stdio.h>
// int main()
// {
//     int a=6,b=7;
//     printf("(%d,%d)=(%d,%d)",a,b,b,a);
//     return 0;
// }

// //q4 taught by sir
// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("enter a\n enter b");
//     scanf("%d %d",&a,&b);
//     c=a;
//     a=b;
//     b=c;
//     printf("after swappin %d %d",a,b);
//     return 0;
// }    

//q5 done by sir
#include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("enter value of a\n value of b");
//     scanf("%d %d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("%d %d",a,b);
//     return 0;
// }    

// //q6 done by me
// int main()
// {
//     int a,b;
//     printf("enter value of a\n value of b");
//     scanf("%d %d",&a,&b);
//     a=a*b;
//     b=a/b;
//     a=a/b;
//     printf("%d %d",a,b);
//     return 0;
// }

// //q7 by sir
// int main()
// {
//     int a,b;
//     printf("enter value of a\n value of b");
//     scanf("%d %d",&a,&b);
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     printf("%d %d",a,b);
//     return 0;
// }

int main()//done by sir
{
    int a,b;
    printf("enter value of a\n value of b");
    scanf("%d %d",&a,&b);
    a=a+b-(b=a);
    printf("%d %d",a,b);
    return 0;
}    