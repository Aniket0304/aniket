#include<iostream>
#include<vector>
using namespace std;
void first_last(int arr[],int target){
    int s= 0;
    int e = 5;
    int mid=s+(e-s)/2;
    vector<int> ans;
    while(s<e){
        if(arr[mid]>target){
            
            for(int i =mid+1; i<e;i++){
                if(arr[i]==target){
                    ans.push_back(i);
                }
            }
            s=mid+1;
        }
        else{
            cout<<mid<<endl;
            for(int i = 0; i<mid-1; i++){
                if(arr[i]==target){
                    ans.push_back(i);
                }
            }
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    // for(int i=0;i<1;i++){
    //     cout<<ans[i]<<" ";
    // }

}
int main (){
    int arr[6]={5,7,7,8,8,10};
    first_last(arr,8);

}
//[5,7,7,8,8,10]