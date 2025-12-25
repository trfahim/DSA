#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i=0; i<n; i++) cin >> num[i];
    
    int val;
    cin >> val;

    int l = 0, r = n-1;
    int check = 0;
    while(l <= r){
        int mid = (l+r)/2;
        if(num[mid] == val){
            check++;
            break;
        }
        else if(num[mid] > val) r = mid-1;
        else l = mid+1;
    }
    
    if(check) cout << "Found";
    else cout << "Not Found";

}
