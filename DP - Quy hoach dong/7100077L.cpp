#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, s; cin >> n >> s;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    bool dp[n+1][s+1];
    dp[0][0] = true;
    for (int i=1; i<=s; i++){
        dp[0][i] = false;
    }
    for (int i=1; i<=n; i++){
        for (int j=s; j>=0; j--){
            if (j<a[i-1]){
                dp[i][j] = dp[i-1][j];
                continue;
            }
            dp[i][j] = dp[i-1][j] | dp[i-1][j-a[i-1]];
        }
    }
    if (!dp[n][s]){
        cout << -1;
    } else{
        int i = n;
        vector<int> trace;
        while (s!=0){
            while (i-1>=0 && dp[i-1][s]) i--;
            s -= a[i-1];
            trace.push_back(i);
        }
        cout << trace.size() << '\n';
        for (int i : trace){
            cout << i << ' ';
        }
    }
}