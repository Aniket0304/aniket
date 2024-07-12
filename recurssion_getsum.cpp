#include<iostream>
using namespace std;

int getsum(int *arr, int  n ){

    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int ans = arr[0]+ getsum(arr+1,n-1);
    return ans;
}

int main(){
    int arr[5]={2,3,4,5,6};
    cout<<getsum(arr,5)<<endl;
}
