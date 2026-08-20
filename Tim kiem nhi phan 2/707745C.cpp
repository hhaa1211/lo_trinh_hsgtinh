#include <iostream>

using namespace std;

long long gcd(long long a, long long b){
    while (b){
        long long tmp = a%b;
        a = b;
        b = tmp;
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        long long a, b, n; cin >> a >> b >> n;
        long long lcm = a/gcd(a, b)*b;
        long long l = 0, r = 1e18;
        long long ans = r;
        while (l<=r){
            long long m = (l+r)/2;
            long long tt = m/a+m/b-m/lcm;
            if (tt>=n){
                ans = m;
                r = m-1;
            } else{
                l = m+1;
            }
        }
        cout << ans << '\n';
    }
}