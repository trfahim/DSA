#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n,q;
    cin >> n >> q;
    vector<long long> v(n);
    vector<long long> pre(n);
    long long sum = 0;
    for(long long i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
        pre[i] = sum;
    }
    while(q--){
        int x,y;
        cin >> x >> y;
        if(x == 1) cout << pre[y-1] << endl;
        else cout << (pre[y-1] - pre[x-2]) << endl;
    }
}