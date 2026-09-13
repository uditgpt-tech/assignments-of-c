#inlcude<stdio.h>

//q
int main(){
    int arr[5];
    for(int j=0; j<=4; j++){
        scanf("%d",&arr[j]);
    }
    
    for(int i=0; i<=4; i++){

        if(arr[0]<arr[i]){
            largest=arr[i];
        }
    }
}