#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int s=0;
    int e=nums.size()-1;
    int i = s+(e-s)/2;
    vector<int>ans;
    vector<vector<int>>val;
    while(i<=nums.size()){
        if((nums[i]+nums[e]+nums[s])==0){
            ans.push_back(nums[s]);
            ans.push_back(nums[i]);
            ans.push_back(nums[e]);
            e--;
            s++;
        }
        if(e==i && s==i){
            i++;
        }

    }
    val.push_back(ans);
    return val;
}

int main(){
    vector<int>nums(6);
    for(int i =0; i<6; ++i){
        cin>>nums[i];
    }
    vector<vector<int>> c= threeSum(nums);
    cout << "Triplets with sum zero are:\n";
    for (const auto& triplet : c) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    
}