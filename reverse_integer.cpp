#include<iostream>
using namespace std;
int main (){
    int c;
    cin>>c;
    int ans= 0;
    int digit;
    while (c!=0){
        digit = c%10;
        ans = digit + (ans*10);
        c= c/10;
    }   
    cout<< ans;
}