#include <iostream>

using namespace std;

long long ltdq(long long x, long long y){
    if (y==0) return 1;
    long long res = ltdq(x, y/2);
    res = (res*res)%1000000007;
    if (y%2) res = (res*x)%1000000007;
    return res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        cout << ltdq(a, b) << '\n';
    }
}