#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, s; cin >> n >> s;
    int w[n], v[n];
    for (int i=0; i<n; i++){
        cin >> w[i] >> v[i];
    }
    long long dp[n+1][s+1];
    for (int i=0; i<=n; i++){
        dp[i][0] = 0;
    }
    for (int i=0; i<=s; i++){
        dp[0][i] = 0;
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=s; j++){
            dp[i][j] = dp[i-1][j];
            if (j>=w[i-1]){
                dp[i][j] = max(dp[i][j], dp[i-1][j-w[i-1]]+v[i-1]);
            }
        }
    }
    cout << dp[n][s];
}