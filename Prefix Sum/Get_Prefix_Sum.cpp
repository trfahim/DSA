#include <bits/stdc++.h>
using namespace std;

int main() {
    long long  n;
    cin >> n;
    vector<long long> v(n), pre(n);
    long long sum = 0;
  
    for(long long i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
        pre[i] = sum;
    }
  
    for(int i=n-1; i>=0; i--) cout << pre[i] << " ";
}
