void cuboid();
#include<iostream>

using namespace std;

// int main(){
//     cout<<"hello"<<endl;
//     cout<<"mysirg";
//     return 0;
// }

int main(){
    int area,r;
    cin>>r;
    area=3.14*r*r;
    cout<<area;
    cuboid();
}

void cuboid(){
    int l,b,h;
    cout<<"enter length, breadth and heoight of the cuboid- ";
    cin>>l>>b>>h;
    cout<< l*b*h;
}