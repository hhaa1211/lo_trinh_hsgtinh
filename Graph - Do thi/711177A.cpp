#include <iostream>
#include <vector>

using namespace std;

bool vis[100005];
vector<int> g[100005];

void dfs(int i){
    vis[i] = true;
    for (int u : g[i]){
        if (!vis[u]){
            dfs(u);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, m; cin >> n >> m;
    while (m--){
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int ans = 0;
    for (int i=1; i<=n; i++){
        if (!vis[i]){
            ans++;
            dfs(i);
        }
    }
    cout << ans-1;
}