#include <iostream>
#include <string>

using namespace std;

int n, m; 
char a[1000][1000];

int d1[4] = {-1, 0, 1, 0};
int d2[4] = {0, 1, 0, -1};

void g(int i, int j){
    a[i][j] = '#';
    for (int k=0; k<4; k++){
        int i1 = i+d1[k], j1 = j+d2[k];
        if (i1>=0 && i1<n && j1>=0 && j1<m && a[i1][j1]=='.'){
            g(i1, j1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n >> m;
    for (int i=0; i<n; i++){
        string s; cin >> s;
        for (int j=0; j<m; j++){
            a[i][j] = s[j];
        }
    }
    int ans = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++) if (a[i][j]=='.'){
                g(i, j);
                ans++;
        }
    }
    cout << ans;
}