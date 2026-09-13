#include<stdio.h>
#include<stdlib.h>

//q1

int main()
{
    int n,num,fact=1,sum=0;
    float rad;
    printf("\n1. factorial of a no.");
    printf("\n2. check even or odd");
    printf("\n3. area of a circle");
    printf("\n4. sum of first n natural no.");
    printf("\n.5 Exit");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            
            printf("enter a no.");
            scanf("%d",&num);
            while(num){
            fact=fact*num;
            num--;
            }
            printf("%d",fact);
            break;

        case 2:
           
           printf("enter a no.");
           scanf("%d",&num);
           if(num%2==0){
               printf("even");
           }
           else{
            printf("odd");
           }
           break;
        
        case 3:
           
           printf("enter radius");
           scanf("%d",&rad);
           printf("area of circle is %f",(3.14)*rad*rad);
           break;
        case 4:
           
           printf("enter digit of natural no.");
           scanf("%d",&num);
           while(num){
            sum=sum+n;
            num--;
           }
           printf("%d",sum);
        break;      
        
        case 5:
           exit(0);
           
        default: 
        printf("inavalid input");   
    }
    return 0;

}


//q2
