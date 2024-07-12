#include <iostream>
using namespace std;
bool palindrome(string& arr,int i , int j){
    if (i>j){
        return false;
    }
    if(arr[i]==arr[j]){
        i++;
        j--;
        return true;
    }
    else {
        return false;
    }
    palindrome(arr,i, j);

}

int main(){
    string arr = "BookkooB";
    int ans = palindrome(arr,0,arr.length()-1);
    if(ans){
        cout<<"true"<<endl;

    }
    else{
        cout<<"false"<<endl;
    }
}
