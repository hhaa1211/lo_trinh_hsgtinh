#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int a[n];
    long long sum = 0;
    for (int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }
    long long dp[n][n];
    for (int i=0; i<n; i++){
        dp[i][i] = a[i];
    }
    for (int i=2; i<=n; i++){
        for (int j=0; j+i<n+1; j++){
            dp[j][j+i-1] = max(1LL*a[j]-dp[j+1][j+i-1], 1LL*a[j+i-1]-dp[j][j+i-2]);
        }
    }
    cout << (sum+dp[0][n-1])/2;
}