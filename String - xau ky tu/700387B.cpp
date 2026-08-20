#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string n; cin >> n;
        int res = 0;
        for (int i=0; i<n.length(); i++){
            res += (n[i]-'0');
        }
        cout << res << endl;
    }
}