#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    string s; cin >> s;
    string t; cin >> t;
    int dp[s.size()+1][t.size()+1];
    for (int i=0; i<=t.size(); i++){
        dp[0][i] = 0;
    }
    for (int i=0; i<=s.size(); i++){
        dp[i][0] = 0;
    }
    for (int i=1; i<=s.size(); i++){
        for (int j=1; j<=t.size(); j++){
            if (s[i-1]==t[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            } else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    cout << dp[s.size()][t.size()];
}