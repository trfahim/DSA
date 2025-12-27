#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    vector<long long> v(n), pre(n);
    long long sum = 0;
    for(long long i=0; i<n; i++){
        cin >> v[i];
        sum ^= v[i];
        pre[i] = sum;
    } 
    long long q;
    cin >> q;
    while(q--){
        long long x,y;
        cin >> x >> y;

        if(x==1) cout << pre[y-1] << endl;
        else{
            cout << (pre[y-1]^pre[x-2]) << endl;
        }

    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
}
