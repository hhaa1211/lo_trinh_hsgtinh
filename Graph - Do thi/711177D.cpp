#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n, k; 
vector<int> g[100005];
int vis[100005];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) vis[i] = -1;
    queue<int> q;
    for (int i=0; i<k; i++){
        int x; cin >> x;
        q.push(x);
        vis[x] = 0;
    }
    int m; cin >> m;
    for (int i=0; i<m; i++){
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (int v : g[u]){
            if (vis[v]==-1){
                vis[v] = vis[u]+1;
                q.push(v);
            }
        }
    }
    for (int i=1; i<=n; i++){
        cout << vis[i] << ' ';
    }
}