#include<bits/stdc++.h>
using namespace std;
    bool issafe(vector<vector<int>> &visit , vector<vector<int>> &m , int ix , int iy ,int n ){

        if((ix< n && ix >=0) && (iy< n && iy>=0) && visit[ix][iy]==0 && m[ix][iy]==1){
            return true;
        }
        else{
            return false;
        }
    }
void puzzle(vector<vector<int> > &m , int n ,vector<string>& ans,int srcx , int srcy, string path, vector<vector<int> > &visit){
    
    //base case
    if(srcx ==n-1 && srcy == n-1){
        ans.push_back(path);
        return; 
    }
    
    visit[srcx][srcy]=1;

    // left 
    int ix= srcx;
    int iy= srcy-1;
    if(issafe(visit, m , ix , iy , n)){
        path.push_back('L');
        puzzle(m,n,ans,ix,iy,path,visit);
        path.pop_back();
    }
    // right 

    ix = srcx;
    iy = srcy+1;
    if(issafe(visit, m , ix , iy , n)){
        path.push_back('R');
        puzzle(m,n,ans,ix,iy,path,visit);
        path.pop_back();
    }

    //up
    ix = srcx-1;
    iy = srcy;
    if(issafe(visit, m , ix , iy , n)){
        path.push_back('U');
        puzzle(m,n,ans,ix,iy,path,visit);
        path.pop_back();
    }

    //down
    ix = srcx+1;
    iy = srcy;
    if(issafe(visit, m , ix , iy , n)){
        path.push_back('D');
        puzzle(m,n,ans,ix,iy,path,visit);
        path.pop_back();
    }

    visit[srcx][srcy]=0;

}


int main (){
    vector<vector<int> > m;
    vector<string> ans;
    int n;
    cin>>n;
    for(int i =0;i<n ;i++){
        for(int j = 0; j<n ; j++){
            cin>>m[i][j];
        }
    }

    if(m[0][0]==0){
        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    vector<vector<int>> visit = m;
    for(int i =0;i<n ;i++){
        for(int j = 0; j<n ; j++){
            visit[i][j]=0;
        }
    }
    int srcx = 0;
    int srcy = 0;
    
    string path ="";

    puzzle(m, n , ans , srcx , srcy , path , visit);
    
    sort(ans.begin(),ans.end());
    for(auto i : ans){
        cout<<i<<" ";
    }
    cout<<endl; 
}