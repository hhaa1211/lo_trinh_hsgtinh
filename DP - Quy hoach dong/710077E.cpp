#include <iostream>

using namespace std;

#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    long long a[n+1][7];
    for (int i=1; i<=n; i++){
        for (int j=1; j<=6; j++){
            if (i==j){
                a[i][j] = 1;
            } else{
                a[i][j] = 0;
            }
        }
    }
    for (int i=2; i<=n; i++){
        for (int j=1; j<=6; j++){
            if (i-j==0){
                break;
            } 
            for (int k=1; k<=6; k++){
                a[i][j] = (a[i][j]+a[i-j][k])%mod;
            }
        }
    }
    long long ans = 0;
    for (int i=1; i<=6; i++){
        ans = (ans+a[n][i])%mod;
    }
    cout << ans;
}