void primes(int, int);

#include<iostream>
using namespace std;

#include<string.h>
#include<math.h>

//q1
void primes(int x, int y){
    int count;
    for(int i=x+1;i< y;i++){
        count=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
            count++;}
        }
        if(count<1){
        cout<<i<<endl;
    }
    }
    
}

void high_digit(int x){
    int max=x%10;
    int temp=0;
    while(x){
        temp=x%10;
        x=x/10;
        if(temp>max){
            max=temp;

        }

    }
    cout<<max;
}

void fibo(int target){
    int fibonaa;
    int a,b;
    if(target==0){
        cout<<"yes present ";

    }
    a=0;
    b=1;

    for(int i=0;i<=target; i++){
        

        fibonaa=a+b;
        if(target==fibonaa){
            cout<<"yes present";
            break;
        
        }
        a=b;
        b=fibonaa;
    }
    if(target!=fibonaa){
        cout<<"not found";
    }


}
int main(){
    int a,b;
    int tar;
   /* cout<<"enter range";
    cin>>a>>b;
    primes(a,b); */

    /*cout<<"enter no.";
    cin>>a;
    high_digit(a);*/

    cout<<"enter a taget value";
    cin>>tar;
    fibo(tar);
}
