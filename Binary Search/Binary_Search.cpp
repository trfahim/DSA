#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n,q;
    cin >> n >> q;
    vector<long long> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    while(q--){
        long long val;
        cin >> val;
        int l = 0, r = n-1;
        int check = 0;

        while(l <= r){
            int mid = (l+r)/2;
            if(v[mid] == val){
                check = 1;
                break;
            }
            else if(v[mid] < val){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        if(check) cout << "found\n";
        else cout << "not found\n";
    }
}