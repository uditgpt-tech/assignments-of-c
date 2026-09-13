float avg(int, int, int);
double square();
#include<iostream>
#include<math.h>
using namespace std;
#include<string>


float avg(int x,int y,int z){
    cout<<"enter three values";
    cin>> x>>y>>z;
    return (x+y+z)/3.0;
}
double square(){
    double x;
    cout<<"enter value of x";
    cin>>x;
    x=pow(x,2);
    return x;
}


int main()
{
    int a,b,c;

    //cout<<avg(a,b,c);

    cout<<square();

}