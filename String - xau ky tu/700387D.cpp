#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int a[127] = {};
        for (char i : s){
            a[i]++;
        }
        for (char i : s){
            if (a[i]==1){
                cout << i;
            }
        }
        cout << endl;
    }
}