#include <iostream>
#include <string>

using namespace std;

#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    int n; cin >> n;
    char a[n][n];
    for (int i=0; i<n; i++){
        string s; cin >> s;
        for (int j=0; j<n; j++){
            a[i][j] = s[j];
        }
    }
    int b[n+1][n+1];
    for (int i=0; i<=n; i++){
        b[i][0] = 0;
        b[0][i] = 0;
    }
    if (a[0][0]=='*'){
        cout << 0;
        return 0;
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i==1 && j==1){
                b[i][j] = 1;
                continue;
            }
            if (a[i-1][j-1]=='*'){
                b[i][j] = 0;
            } else{
                b[i][j] = (1LL*b[i][j-1]+b[i-1][j])%mod;
            }
        }
    }
    cout << b[n][n];
}