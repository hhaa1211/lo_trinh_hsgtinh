#include <iostream>
#include <utility>

using namespace std;

bool ch(long long x, pair<int, int> a[], long long tar, int n){
    long long tt = 0;
    for (int i=0; i<n; i++){
        if (x>=a[i].first){
            tt += 1+1LL*(x-a[i].first)/a[i].second;
        }
        if (tt>=tar) return true;
    }
    return tt>=tar;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    long long x; cin >> x;
    pair<int, int> a[n];
    for (int i=0; i<n; i++){
        int p, t; cin >> p >> t;
        a[i] = make_pair(p, t);
    }
    long long l = 0, r = 1e18;
    long long ans = r;
    while (l<=r){
        long long m = (l+r)/2;
        if (ch(m, a, x, n)){
            ans = m;
            r = m-1;
        } else{
            l = m+1;
        }
    }
    cout << ans << '\n';
}