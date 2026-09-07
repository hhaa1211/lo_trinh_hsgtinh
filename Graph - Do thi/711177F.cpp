#include <iostream>
#include <vector>

using namespace std;

typedef struct{
    int sd;
    int av;
    int gv;
} ans;

vector<int> g[100005];
ans vis[100005];
int v[100005];

ans dfs(int i){
    vis[i].sd = 1;
    vis[i].av = v[i];
    vis[i].gv = v[i];
    for (int j : g[i]){
        if (!vis[j].sd){
            ans tmp = dfs(j);
            vis[i].sd += tmp.sd;
            vis[i].av += tmp.av;
            vis[i].gv = max(vis[i].gv, tmp.gv);
        }
    }
    return {vis[i].sd, vis[i].av, vis[i].gv};
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, m; cin >> n >> m;
    for (int i=1; i<=n; i++) cin >> v[i];
    while (m--){
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    ans res[n+1];
    for (int i=1; i<=n; i++){
        if (!vis[i].sd){
            res[i] = dfs(i);
            for (int j : g[i]){
                res[j] = res[i];
            }
        }
    }
    int q; cin >> q;
    while (q--){
        int x; cin >> x;
        cout << res[x].sd << ' ' << res[x].av << ' ' << res[x].gv << '\n';
    }
}