void f2(char arr[], int y);
void f3(char brr[], int z);
#include<stdio.h>


// //q1
int main(){

    char crr[]="UDIT GUPTA";
    char drr[]="udi34%$t";
    

    for(int i=0; crr[i]; i++){
        crr[i]=crr[i]+32;
        printf("%c",crr[i]);
    }
    printf("\n");
    // f2(crr,10);
    f3(drr,8);
}

//Q2
//reverse string
void f2(char arr[],int y){
    int count=0,times;
    char temp;

    for(int i=0;arr[i]; i++){ //length
        count++;
    }
    int length=count;
    
    
    for(int j=0; j < (length)/2 ; j++){
        temp=arr[count-1];            // to swap first and last ,lly 2nd last and 2nd and so on....
        arr[count-1]=arr[j];
        arr[j]=temp;
        count--;    }
            
    printf("reverse = %s" ,arr);
}


//q3
void f3(char brr[], int z){
    int count1=0, count2=0,count3=0;

    for(int i=0; brr[i];i++){

        if( brr[i] >48 &&brr[i]<57){
            count1++;
        }
        else if((brr[i] >=67 && brr[i]<=90) || (brr[i]>=97 &&brr[i]<=122)){
                count2++;

             }
        else if(brr[i]<=126){
            count3++;
        }
    }
    printf("digit =%d\n  alphabet= %d\n special chara.= %d",count1,count2,count3);
}
