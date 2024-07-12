#include<bits/stdc++.h>

using namespace std;

void solve(int n,int k,int j,int a,vector<vector<int>>&ans)

{
    if(n==1)

    {
        ans.push_back({k,j});

        return ;
    }
    solve(n-1,k,a,j,ans);

    ans.push_back({k,j});

    solve(n-1,a,j,k,ans);

}

int main()
{
    int n;
    cin>>n;

    vector<vector<int>>ans;

    solve(n,1,3,2,ans);

    for (const auto &vec : ans) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }

}