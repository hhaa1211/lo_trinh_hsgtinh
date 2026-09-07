#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<int> g[100005];
bool vis[100005];

long long dfs(int i){
    vis[i] = true;
    long long c = 1;
    for (int j : g[i]){
        if (!vis[j]){
            c += dfs(j);
        }
    }
    return c;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n >> m;
    while (m--){
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    long long ans = 0;
    for (int i=1; i<=n; i++) if (!vis[i]){
        long long tmp = dfs(i);
        ans += tmp*(tmp-1)/2;
    }
    cout << ans;
}