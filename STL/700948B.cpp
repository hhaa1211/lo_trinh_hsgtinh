#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, q; cin >> n >> q;
    unordered_map<int, vector<int>> m;
    int x;
    for (int i=1; i<=n; i++){
        cin >> x;
        m[x].push_back(i);
    }
    int k;
    while (q--){
        cin >>  x >> k;
        unordered_map<int, vector<int>> :: iterator it = m.find(x);
        if (it==m.end() || k>it->second.size()){
            cout << -1 << '\n';
        } else{
            cout << it->second[k-1] << '\n';
        }
    }
}