#include <iostream>
#include <vector>

using namespace std;

int n, m, S, T;
int u, v;
vector<int> g[100005];
bool vis[100005];
int trace[100005];

void dfs(int i){
    vis[i] = true;
    for (int j : g[i]) if (!vis[j]){
        trace[j] = i;
        dfs(j);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n >> m >> S >> T;
    while (m--){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(S);
    if (!trace[T]){
        cout << -1;
    } else{
        vector<int> ans;
        while (T!=S){
            ans.push_back(T);
            T = trace[T];
        }
        ans.push_back(T);
        for (int i=ans.size()-1; i>=0; i--){
            cout << ans[i] << ' ';
        }
    }
}