#include <iostream>
#include <string>

using namespace std;

int n, m;
int a[202][202];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        string s; cin >> s;
        for (int j=1; j<=m; j++){
            a[i][j] = s[j-1];
        }
    }
    dfs(2, 2, )
}