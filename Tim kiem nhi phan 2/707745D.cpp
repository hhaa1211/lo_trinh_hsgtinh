#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, m; cin >> n  >> m;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    long long l = 1, r = 1e18;
    long long ans = r;
    while (l<=r){
        long long mi = (l+r)/2;
        long long tt = 0;
        for (int i=0; i<n; i++){
            tt += mi/a[i];
            if (tt>=m){
                break;
            }
        }
        if (tt>=m){
            ans = mi;
            r = mi-1;
        } else{
            l = mi+1;
        }
    }
    cout << ans;
}