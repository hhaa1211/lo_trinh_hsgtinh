#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    long long pfa[n+1] = {};
    for (int i=1; i<=n; i++){
        int x; cin >> x;
        pfa[i] = pfa[i-1]+x;
    }
    int t; cin >> t;
    while (t--){
        int l, r; cin >> l >> r;
        cout << pfa[r]-pfa[l-1] << '\n';
    }
}