#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int a[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    vector<vector<int>> cc(n+1, vector<int>(n+1, 0)), cp(n+2, vector<int>(n+2, 0));
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cc[i][j] = cc[i-1][j-1]+a[i-1][j-1];
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=n; j>=1; j--){
            cp[i][j] = cp[i-1][j+1]+a[i-1][j-1];
        }
    }
    int ans = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){ 
            for (int k=2; k<=min(i, j)+1; k++){
                ans = max(ans, cc[i+1][j+1]-cc[i-k+1][j-k+1]-(cp[i+1][j-k+2]-cp[i-k+1][j+2]));
            }
        }
    }
    cout << ans;
}