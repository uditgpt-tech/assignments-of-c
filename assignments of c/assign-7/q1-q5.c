#include<stdio.h>
//q1
// int main()
// {
//     float a;
//     printf("enter a no. ");
//     scanf("%f",&a);
//     if(a>0)
//     printf("a is positive");
//     else
//     printf("a is non positive");
//     return 0;
// }

//q2
// int main()
// {
//     int a;
//     printf("enter a no. ");
//     scanf("%d",&a);
    
//     if(a%5==0)
//     printf("a is divisible by 5");
//     else
//     printf("a is not divisible by 5");
//     return 0;
// }

//q3
// int main()
// {
//     int a;
//     printf("enter a no. ");
//     scanf("%d",&a);
//     if(a%2==0)
//     printf("a is even");
//     else
//     printf("a is odd");
//     return 0;
// }

//q4
// int main()
// {
//     int a;
//     printf("enter value of a");
//     scanf("%d",&a);
//     if(a-(a/10*10)==0||a-(a/10*10)==2||a-(a/10*10)==4||a-(a/10*10)==6||a-(a/10*10)==8)
//     printf("a is even");
//     else
//     printf("a is odd");
//     return 0;
// }


//q5
// int main()
// {
//     int a,b;
//     printf("enter a value of a");
//     scanf("%d",&a);
//     b=(a&2==0||a&2==2||a&2==4||a&2==6||a&2==8);
//     if(b)
//     printf("a is odd");
//     else
//     printf("a is even");
//     return 0;
    
// }

int main(){
    int i;
    printf("enter a no.");
    scanf("%d",&i);
    if(((i/10)/10)==i/100)
    printf("3 digit");
    else
    printf("not");
}