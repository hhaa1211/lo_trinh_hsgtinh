#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, q; cin >> n >> q;
    string s; cin >> s;
    vector<vector<int>> a(n+1, vector<int>(26, 0));
    for (int i=1; i<=n; i++){
        for (int j=0; j<26; j++){
            a[i][j] = a[i-1][j];
        }
        a[i][s[i-1]-'a']++;
    }
    while (q--){
        char c; int l, r; cin >> c >> l >> r;
        cout << a[r][c-'a']-a[l-1][c-'a'] << '\n';
    }
}