#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    vector<long long> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<long long> da(n+1);
    for (int i=0; i<n; i++){
        if (i==0){
            da[i] = a[i];
        } else{
            da[i] = 1LL*a[i]-a[i-1];
        }
    }
    int q; cin >> q;
    while (q--){
        int l, r, x; cin >> l >> r >> x;
        da[l-1] += x;
        da[r] -= x;
    }
    for (int i=0; i<n; i++){
        if (i==0){
            a[0] = da[0];
        } else{
            a[i] = a[i-1]+da[i];
        }
        cout << a[i] << ' ';
    }
}