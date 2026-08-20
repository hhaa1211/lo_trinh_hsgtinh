#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int x;
    map<int, vector<int>> m;
    for (int i=0; i<n; i++){
        cin >> x;
        m[x].push_back(i+1);
    }
    int q; cin >> q;
    while (q--){
        int l, r, x; cin >> l >> r >> x;
        int i = lower_bound(m[x].begin(), m[x].end(), l)-m[x].begin();
        int j = upper_bound(m[x].begin(), m[x].end(), r)-m[x].begin();
        cout << j-i << '\n';
    }
}