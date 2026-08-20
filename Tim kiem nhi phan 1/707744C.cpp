#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int q; cin >> q;
    while (q--){
        int l, r; cin >> l >> r;
        int i = lower_bound(a, a+n, l)-a;
        int j = upper_bound(a, a+n, r)-a;
        cout << j-i << '\n';
    }
}