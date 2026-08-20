#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int dp[n];
    for (int i=0; i<n; i++){
        dp[i] = 1;
    }
    int ans = dp[0];
    int p[n];
    p[0] = 0;
    for (int i=1; i<n; i++){
        for (int j=0; j<i; j++){
            if (a[i]>a[j]){
                dp[i] = max(dp[i], dp[j]+1);
            } 
        }
        ans = max(ans, dp[i]);
    }
    cout << ans;
}