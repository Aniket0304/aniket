#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// void solve(int n,int a,int b){
//     if(n==1){
//         return ;
//     }
//     int c=a+b;
//     cout<<c<<" ";
//     solve(n-1,b,c);
// }

// int main(){
//     int n;cin >> n;
//     cout<<0<<" "<<1<<" ";
//     solve(n-2,0,1);
// }

vector<int>ans;

int fibo(int n ){

    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }
    
    fibo(n-1)+fibo(n-2);


}

int main(){
   int n;

   cin>>n;

   cout<<fibo(n)<<" ";
}
// 0 1 1 2 3 5 8 13