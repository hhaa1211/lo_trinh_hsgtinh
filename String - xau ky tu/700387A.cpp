#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string n; cin >> n;
        if (n[0]=='-'){
            cout << n.length()-1;
        } else{
            cout << n.length();
        }
        cout << endl;
    }
}