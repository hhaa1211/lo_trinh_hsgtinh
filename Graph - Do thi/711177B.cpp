#include <iostream>
#include <vector>

using namespace std;

bool vis[100005];
vector<int> g[100005];

int c = 0;

void dfs(int x){
    vis[x] = true;
    if (x==1){
        c = 1;
    }
    for (int i : g[x]){
        dfs(i);
        c++;
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
    int ans = -1;
    for (int i : g[1]){

    }
}