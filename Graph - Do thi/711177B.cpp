#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int vis[100005];
vector<int> g[100005];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, m; cin >> n >> m;
    while (m--){
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    queue<int> q;
    q.push(1);
    vis[1] = 1;
    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (int v : g[u]) if (vis[v]==0){
            vis[v] = vis[u]+1;
            q.push(v);
        }
    }
    if (vis[n]){
        cout << vis[n];
    } else{
        cout << -1;
    }
}