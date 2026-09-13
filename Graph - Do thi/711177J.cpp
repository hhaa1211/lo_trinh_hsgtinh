#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, m;
int a[202][202];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0 , -1};

int dfs(int i, int j){
    int ans = 1;
    int c;
    a[i][j] = '#';
    for (int k=0; k<=3; k++){
        int x1 = i+dx[k], y1 = j+dy[k];
        if (x1>1 && x1<n && y1>1 && y1<m && a[x1][y1]=='.'){
            c = max(0, dfs(x1, y1));
            a[x1][y1] = '.';
        }
        if (x1>1 && x1<n && y1>1 && y1<m && a[x1][y1]=='#'){
            continue;
            c = 0;
        }
    }
    return ans+c;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    cin >> n >> m;
    for (int i=1; i<=n; i++){
        string s; cin >> s;
        for (int j=1; j<=m; j++){
            a[i][j] = s[j-1];
        }
    }
    cout << dfs(2, 2);
}