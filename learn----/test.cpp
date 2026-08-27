#include <iostream>
#include <vector>
#define maxn 100005
#define f0(i,n) for(int i=0; i<n; i++)
#define f1(i,n) for(int i=1; i<=n; i++)
#define el cout<<'\n'
using namespace std;
int n, m;
vector <int> g[maxn];
/// a[u] adj[u] ke[u]
int vis[maxn];
void dfs(int u)
{
    vis[u] = 1;
    for (int v:g[u]) if (!vis[v])
        dfs(v);
}
int main()
{
    freopen("test.inp", "r", stdin);
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i=1; i<=m; i++)
    {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    return 0;
}