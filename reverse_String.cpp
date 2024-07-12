#include<iostream>
#include<string>
using namespace std;

void reverse_String(string& arr,int i , int j){
    // base case
    if(i>j){
        return ;
    }
    swap(arr[i],arr[j]);
    reverse_String(arr, i+1 , j-1);
    
}

int main(){

    string arr = "aniket";
    reverse_String(arr, 0, arr.length()-1);
    cout<<arr<<endl;
}