#include<iostream>
using namespace std;
bool issorted(int arr[],int size){
    
    //base case

    if(size==0 || size==1){
        return true;
    }
    
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = issorted(arr+1, size-1);
        return ans;
    }

}
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    bool val= issorted(arr,10);
    if(val){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
    
}
    