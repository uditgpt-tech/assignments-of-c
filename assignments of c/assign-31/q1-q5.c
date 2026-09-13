#include<stdio.h>
//q5

int main(){

    int arr[6];
    int k=0;
    for(int i=0; i<=5 ;i++){

        scanf("%d",&arr[i]);
    }
    for(int j=k+1; j<=5 ;j++){

        if(arr[k]==arr[j]){
            printf("%d %d",arr[k],arr[j]);
            break;
        }
        k++;
    }
    return 0;    
}

//q4 doubt