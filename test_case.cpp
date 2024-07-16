#include<iostream>
#include<vector>
using namespace std;

void permutation(string alpha , int index, string output , vector<string>& ans){
    // base case 
    if(index >= alpha.length()){
        ans.push_back(output);
        return; 
    }

    for(int i = 0; i < alpha.length(); i++){
        if(output.find(alpha[i]) == string::npos) { // If character is not already in the output
            output.push_back(alpha[i]);
            permutation(alpha, index + 1, output, ans);
            output.pop_back();
        }
    }
}

int main(){
    string alpha;
    cin >> alpha;
    string output = "";
    vector <string> ans;
    permutation(alpha , 0 , output , ans);

    for(auto i : ans){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
    