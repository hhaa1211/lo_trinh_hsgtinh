#include <iostream>
#include <algorithm>

using namespace std;

#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, k; cin >> n >> k;
    long long a[n+1];
    for (int i=1; i<=n; i++){
        a[i] = -1;
    }
    while (k--){
        int x; cin >> x;
        a[x] = 0;
    }
    a[0] = 0;
    a[1] = 1;
    for (int i=2; i<=n; i++){
        if (a[i]!=0){
            a[i] = (a[i-1]+a[i-2])%mod;
        } else{
            a[i] = 0;
        }
    }
    cout << a[n];
}