#include <iostream>
#include <algorithm>

using namespace std;

long long c(long long t, const int a[], int n){
    if (t<=0) return 0;
    long long tt = 0;
    for (int i=0; i<n; i++){
        tt += t/a[i];
    }
    return tt;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    long long t; cin >> t;
    int n; cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int m; cin >> m;
    int b[m];
    for (int i=0; i<m; i++){
        cin >> b[i];
    }
    sort(b, b+m);
    long long l = 0, r = t, t1 = 0;
    while (l<=r){
        long long mi = (l+r)/2;
        long long ma = c(mi, a, n);
        long long p = c(t-mi, b, m);
        if (ma<=p){
            t1 = mi;
            l = mi+1; 
        } else{
            r = mi-1;
        }
    }
    long long res = min(c(t1, a, n), c(t-t1, b, m));
    if (t1+1<=t){
        res = max(res, min(c(t1+1, a, n), c(t-t1-1, b, m)));
    }
    cout << res;
}