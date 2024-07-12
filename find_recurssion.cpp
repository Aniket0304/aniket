#include<iostream>
using namespace std;

bool find(int *arr, int n, int target){

    //base case

    if(n==0){
        return false;
    }

    if(arr[0]==target){
        return true;
    }

    else{
        bool ans = find(arr+1,n-1,target);
        return ans;
    }
}

int main(){
    int target;
    cin>> target;

    int arr[10]={0,1,2,3,4,5,6,7,8,9};

    bool val= find(arr,10,target);
    if(val){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}