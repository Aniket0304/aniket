#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        vector<int> flowers(n);
        for (long long i = 0; i < n; i++) {
            cin >> flowers[i];
        }   

        sort(flowers.begin(), flowers.end());

        long long  maxi=0;
        long long  e = 0;
        long long  sum =0;
        for ( long long s = 0; s< n ; s++){
            while(e < n && (flowers[e]-flowers[s])<=1 && sum+flowers[e]<=m){
                sum+=flowers[e];
                e++;
            }
            maxi= max(maxi,sum);
            sum-=flowers[s];
        }
        cout<< maxi << endl;
    }
    
    return 0;
}