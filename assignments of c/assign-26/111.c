//q1 complete
//q2 complete
//q3 q4 nahi aya

//q5
int printrev(int n ,int digit );
#include<stdio.h>
#include<math.h>

int main(){

    int count=0,n,num,b;
    printf("enter a no.");
    scanf("%d",&n);
    b=n;
    
    while(b){
        b=b/10;
        count++;
    }
    
    
    num=printrev(n,count);
    printf(" rev.num= %d",num);
}    
int printrev(int n, int digit){
    int finalnum;
        

    if(digit==0){
        return 0;
        
        
        
    }
    else{
        finalnum= (n%10)*pow(10,digit-1)+ printrev(n/10,digit-1);
        
        
    }
 
    return finalnum;
}

