#include <iostream>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t, k; cin >> t >> k;
    map<int, int> m;
    long long res = 0;
    while (t--){
        int x; cin >> x;
        int tar = k-x;
        if (m.find(tar)!=m.end()){
            res += m[tar];
        }
        m[x]++;
    }
    cout << res;
}