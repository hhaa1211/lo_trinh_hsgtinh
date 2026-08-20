#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int l, r, k; cin >> l >> r >> k;
        long long n = r/k-(l-1)/k, u1 = (l+k-1)/k*k;
        cout << u1*n+n*(n-1)*k/2 << '\n';
    }
}