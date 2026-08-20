#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    int n; cin >> n;
    int a[n];
    int sum = 0;
    for (int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }
    bool dp[sum+1];
    dp[0] = true;
    for (int i=1; i<=sum; i++){
        dp[i] = false;
    }
    for (int i : a){
        for (int j=sum; j>=i; j--){
            dp[j] = (dp[j] | dp[j-i]);
        }
    }
    int ans = 0;
    for (int i=1; i<=sum; i++){
        if (dp[i]){
            ans++;
        }
    }
    cout << ans << '\n';
    for (int i=1; i<=sum; i++){
        if (dp[i]){
            cout << i << ' ';
        }
    }
}