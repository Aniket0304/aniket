#include<iostream>
#include<vector>
using namespace std;

void permutation(string alpha , int index ,string output , vector<string>& ans){

    // base case 
    if(output.length() == alpha.length()){
        ans.push_back(output);
        return; 
    }
;
    // input for first 
    for(int i =index; i< alpha.length() ; i++){
        swap(alpha[index],alpha[i]);
        output.push_back(alpha[index]);
        permutation(alpha ,index +1, output , ans);
        swap(alpha[index],alpha[i]);// backtrack 
        
    }
    

}

int main(){
    string alpha;
    cin >> alpha;
    string output ="";
    vector <string> ans;
    int index=0;
    permutation(alpha , index , output , ans);
    for(auto i : ans){
        cout<<i<<" ";
    }
    cout<< endl;
    return 0;
    
}