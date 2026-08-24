#include <iostream>
#include <algorithm>

using namespace std;

int dp[502][502];

int cat(int n, int m){
    if (n==m){
        return 0;
    }
    if (dp[n][m]!=-1){
        return dp[n][m];
    }
    int ans = 1e9;
    for (int i=1; i<n; i++){
        ans = min(ans, cat(i, m)+cat(n-i, m)+1);
    }
    for (int i=1; i<m; i++){
        ans = min(ans, cat(n, i)+cat(n, m-i)+1);
    }
    return dp[n][m]=dp[m][n]=ans;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, m; cin >> n >> m;
    for (int i=0; i<=n; i++){
        for (int j=0; j<=m; j++){
            dp[i][j] = -1;
        }
    }
    cout << cat(n, m);
}