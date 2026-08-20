#include <iostream>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    map<int, int> m;
    while (t--){
        int x; cin >> x;
        m[x]++;
    }
    cout << m.size();
}