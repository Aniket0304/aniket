#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"Enter the number :"<<endl;
    cin>>a;
    cout<<"Enter the number :"<<endl;
    cin>>b;
    cout<<"Enter the number :"<<endl;
    cin>>c;
    // if(a>b && a>c){
    //     cout<<a<<" is bigger"<<endl;
    // }
    // else if(b>a && b>c){
    //     cout<<b<<" is bigger"<<endl;

    // }
    // else{
    //     cout<<c<<" is bigger"<<endl;
    // }

    (a>b && a>c) ? a : b ;
}