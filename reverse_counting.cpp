#include<iostream>
using namespace std;
void reverse(int n){
    if(n==0){
        return ;
    }
    reverse(n-1);
    cout<<n<<endl;
}

int main (){
    int n;
    cin>>n;
    reverse(n);   
}