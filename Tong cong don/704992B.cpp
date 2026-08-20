#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, q; cin >> n >> q;
    int pfa[n+1][n+1] = {};
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            char x; cin >> x;
            if (x=='*'){
                pfa[i][j] = 1+pfa[i][j-1]+pfa[i-1][j]-pfa[i-1][j-1];
            } else{
                pfa[i][j] = pfa[i][j-1]+pfa[i-1][j]-pfa[i-1][j-1];
            }
        }
    }
    while (q--){
        int a, b, c, d; cin >> a >> b >> c >> d;
        cout << pfa[c][d]-pfa[a-1][d]-pfa[c][b-1]+pfa[a-1][b-1] << '\n';
    }
}