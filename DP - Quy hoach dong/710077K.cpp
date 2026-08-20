#include <iostream>

#define mod 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    int n, s; cin >> n >> s;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int dp[s+1];
    dp[0] = 1;
    for (int i=1; i<=s; i++){
        dp[i] = 0;
    }
    for (int i=0; i<n; i++){
        for (int j=1; j<=s; j++){
            if (j>=a[i]){
                dp[j] = (1LL*dp[j]+dp[j-a[i]])%mod;
            }
        }
    }
    cout << dp[s];
}