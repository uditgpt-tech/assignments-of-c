//q1
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a three digit no.- ");
    
    scanf("%d",&a);
    b=(a/100)+((a/10)%10)+(a%10);
    printf("the sum of three digit %d %d %d is %d",(a/10)/10,(a/10)%10,a%10,b);
    return 0;
}

// //q2
// #include<stdio.h>
// int main()
// {
//     char a='+';
//     printf("the ascii code for '+' will be %d",a);
//     return 0;
// }


//q3
// #include<stdio.h>
// int main()
// {
//     int a;
//     char b;
//     double c;
//     float d;
//     printf("size of a int variable will be %d\n size of char type varia. will be %d\n size of float type varia. will be %d\n size of double type varia. will be %d",sizeof(a),sizeof(b),sizeof(d),sizeof(c));
//     return 0;
// }

//q4
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter a no.- ");
//     scanf("%d",&a);

//     printf("the value of a no. by removing last & storing 0 in place of it will be %d ",a-a%10);
//     return 0;
// }

// //q5
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter a no.- ");// a random no.
//     scanf("%d",&a);
//     printf("enter a append digit"); // adding a digit in last of a random no.
//     scanf("%d",&b);
//     c=a*10+b;
//     printf("the resul. no. after appending a digit b in no. a will be %d",c);
//     return 0;
// }

//all answers done!