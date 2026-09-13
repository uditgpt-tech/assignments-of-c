#include<stdio.h>
int main(){
    int t1,t2,mid_val;
    int k;//searched value
    int arr[]={2,4,7,11,12,15};
    
    printf("enter value ");
    scanf("%d",&k);
    t1=0,t2=5;
    while(t2>= t1){
        mid_val= (t1+t2)/2;
        if(arr[mid_val] > k){
            t2= mid_val-1;
        }
        else if (arr[mid_val] < k)
        {
            t1= mid_val +1;
        }
        else {
            printf("exist at %d", mid_val);
            exit(0);
        }
        
    }
    printf("not present");
    return 0;

}