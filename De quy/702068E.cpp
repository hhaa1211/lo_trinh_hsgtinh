#include <iostream>
#include <algorithm>

using namespace std;

int ss(long long a){
    if (a==0) return 1;
    int res = 0;
    while(a){
        a /= 10;
        res++;
    }
    return res;
}

long long bp(long long x, long long y, long long mod){
    if (y==0){
        return 1;
    }
    long long tmp = bp(x, y/2, mod)%mod;
    if (y%2){
        return (((tmp*tmp)%mod)*x)%mod;
    } else{
        return (tmp*tmp)%mod;
    }
}

long long mul(long long a, long long b, long long mod){
    if (a<10 || b<10){
        return (a*b)%mod;
    }
    if (b>a) swap(a, b);
    int n = ss(a)/2;
    long long n_10 = bp(10, n, mod);
    long long n2_10 = bp(10, 2*n, mod);
    long long p10 = 1;
    for (int i=0; i<n; i++) p10 *= 10;
    long long xl = a/p10, 
              xr = a%p10,
              yl = b/p10,
              yr = b%p10;
    long long xyl = mul(xl, yl, mod),
              xyr = mul(xr, yr, mod),
              xy = mul((xl+xr)%mod, (yl+yr)%mod, mod);
    long long m = (xy-xyl-xyr)%mod;
    m = (m+mod+mod)%mod; 
    long long l = (xyl*n2_10)% mod;
    long long r = (m*n_10)%mod;
    long long res = (l+r)%mod;
    res = (res+xyr)%mod; 
    return res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    long long a, b, mod;
    cin >> a >> b >> mod;
    cout << mul(a, b, mod);
}