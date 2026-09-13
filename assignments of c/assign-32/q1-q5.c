#include<stdio.h>
void f2(int brr[], int c);
void f1(int a[],int b  );
void f3(int crr[],int d);
void f4(int drr[], int e);
//q1
int main(){

    int arr[6];
    
    for(int i=0; i<=5; i++){
        scanf("%d",&arr[i]);
    }

    // f1(arr[],6);
    f2(arr,6);
    //f3(arr,6);
    // f4(arr,6);

}
void f1(int a[],int b){
    int c,i,j;
    printf("enter two indices");
    scanf("%d %d",&i,&j);

    c=a[i];
    a[i]=a[j];
    a[j]=c;
    for(int p=0; p<b; p++){
        printf("%d",a[p]);
    }
}

//q2

void f2(int brr[], int c){

    int count,k=0;
    for(int i=0; i< c ; i++){
        count=0;
        for(int j=k+1;j< c;j++){
            if(brr[j]==brr[k]){
               count++;
            }
        }
        if(count>0){ // only duplicate, not more than that
            printf("%d",brr[k]);
        }
        k++;

    }

    ///galat hogya for 1 1 2 2 3 2 
}
//unique no.
void f3(int crr[], int d){

    int var=1,k=0,count;
    for(int i=0; i< d ; i++){
        count=0;
        
        for(int j=0;j< d;j++){
            if(j!=k && crr[j]==crr[k]){
               count++;
               
               
               
            }
        }
        if(count==0){
            printf("%d",crr[k]);

        }
        k++;

    }
}

void f4(int drr[], int e){
    int k=0,count;
    for(int i=0; i< e; i++){
        count=1;
        for(int j=0; j< e;j++){
            if(j!=k && drr[j]==drr[k]){

                count++;
            }


        }
        printf("frequency of %d is %d\n",drr[k],count);
        k++;
    }
}

//4