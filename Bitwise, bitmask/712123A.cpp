#include <iostream>

using namespace std;

int t, n;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    cin >> t;
    while (t--){
        cin >> n;
        if (n==0){
            cout << 0 << '\n';
            continue;
        }
        bool flag = false;
        for (int i=30; i>=0; i--){
            int bit = (n >> i) & 1;
            if (bit==1) flag = true;
            if (flag) cout << bit;
        }
        cout << '\n';
    }
}