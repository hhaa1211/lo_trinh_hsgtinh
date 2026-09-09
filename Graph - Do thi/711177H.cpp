#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

typedef struct{
    int x, y;
} p;

int m, S, T, u, v, m;
vector<p> g;

bool bfs(int i){
    unordered_map<int, vector<int>> gg;
    unordered_map<int, bool> vis;
    for (int j=0; j<i; j++){
        gg[g[j].x].push_back(g[j].y);
        vis[g[j].x] = false;
        vis[g[j].y] = false;
    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> m >> S >> T;
    while (m--){
        cin >> u >> v;
        g.push_back({u,v});
    }
    int l = 1, r = 100000;
    int ans = r;
    while (l<=r){
        m = (r+l)/2;
        if (bfs(m)){
            r = m-1;
        } else{
            l = m+1;
        }
    }
}