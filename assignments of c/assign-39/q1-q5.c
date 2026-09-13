int f1(int arr[][] );

#include<stdio.h>
#inlcude<string>
int main(){
    int crr[]="aarchi";
    int** mybrr=f1(crr);
    for(int q=0;q<2;q++){
        for(int p=0;p<len(crr);p++){
            printf("%d",mybrr[q][p]);
        }
    }
    


}

int f1(int arr[][],int k){
    int count,k;
    int brr[50][2];
    for(int k=0;k<leng(arr) ;k++){
        
        for(int i=0; i<len(arr);i++){
            if(arr[k]==arr[i]){
                count++;
            }
            
        }

        for(int j=0; j<=k;j++){
            if(brr[j][0]==arr[k]){
                duplicate=1;

            }
        }
        if(duplicate=1){
            continue;
        }
       
        
        brr[k][0]=arr[k];
        brr[k][1]=count;




    }
    return brr;
}