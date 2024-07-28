#include<bits/stdc++.h>
using namespace std;
int pivot(int* arr, int target){
    int s =0 ;
    int e= 8;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[0]<=arr[mid]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        
    }
}
int search(){

}
int main(){
    int arr[9]={4,5,6,7,8,0,1,2,3}; // mid = 7 
    int target = 6;

}