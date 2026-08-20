#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int m, n; cin >> m >> n;
    int a[m+5][n+5];
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    int t[m+5][n+5], l[m+5][n+5], r[m+5][n+5], b[m+5][n+5];
    for (int i=0; i<=m+1; i++){
        for (int j=0; j<=n+1; j++){
            t[i][j] = l[i][j] = r[i][j] = b[i][j] = 0;
        }
    }
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            if (a[i][j]!=0){
                t[i][j] = t[i-1][j]+1;
                l[i][j] = l[i][j-1]+1;
            }
        }
    }
    for (int i=m; i>=1; i--){
        for (int j=n; j>=1; j--){
            if (a[i][j]!=0){
                r[i][j] = r[i][j+1]+1;
                b[i][j] = b[i+1][j]+1;
            }
        }
    } 
    int res = 0;
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            if (a[i][j]!=0){
                res = max(res, 1);
                for (int k=min(l[i][j], t[i][j]); k>1; k--){
                    if (k<=res){
                        break;
                    }
                    if (r[i-k+1][j-k+1]>=k && b[i-k+1][j-k+1]>=k){
                        res = k;
                        break;
                    }
                }
            }
        }
    } 
    cout << res*res;
}