#include<iostream>
using namespace std;
bool binary_search(int *arr, int s, int e , int k){

    // base case 

    if(s>e){
        return false;
    }

    int mid = s+(e-s)/2;

    if(arr[mid]==k){
        return true;
    }

    if(arr[mid]>k){
        return binary_search(arr,s,mid-1,k);
    }

    else{
        return binary_search(arr,mid+1,e,k);
    }
}

int main (){
    int arr[5] ={1,2,3,4,5};
    int k ;
    cin>>k;
    bool ans =  binary_search(arr,0,4,k);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}