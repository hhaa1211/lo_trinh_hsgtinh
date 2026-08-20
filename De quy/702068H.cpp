#include <iostream>

using namespace std;

long long rp(long long a, int b, int mod){
    if (b==0){
        return 1;
    }
    long long tmp = rp(a, b/2, mod);
    long long res = (tmp*tmp)%mod;
    if (b%2){
        return (res*(a%mod))%mod;
    }
    return res;
}

long long sinh(long long a, int i, int mod){
    if (i==0){
        return 1;
    }
    if (i%2){
        return (sinh(a, i/2, mod)*(1+rp(a, i/2+1, mod)))%mod;
    }
    return (sinh(a, i-1, mod)+rp(a, i, mod))%mod;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int a, n, mod;
    cin >> a >> n >> mod;
    cout << sinh(1LL*a, n, mod);
}