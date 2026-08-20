#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    int n, m; cin >> n >> m;
    int q; cin >> q;
    long long da[n+1][m+1] = {};
    while (q--){
        int x, y, u, v, c;
        cin >> x >> y >> u >> v >> c;
        da[x-1][y-1] += c;
        da[x-1][v] -= c;
        da[u][y-1] -= c;
        da[u][v] += c;
    }
    long long pfa[n+1][m+1] = {};
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            pfa[i][j] = pfa[i-1][j]+pfa[i][j-1]-pfa[i-1][j-1]+da[i-1][j-1];
        }
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cout << pfa[i][j] << ' ';
        }
        cout << '\n';
    }
}