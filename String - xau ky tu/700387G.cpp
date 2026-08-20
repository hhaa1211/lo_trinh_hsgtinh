#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; getline(cin, s);
        int x; cin >> x;
        cin.ignore();
        for (char &i : s){
            if (i!=' '){
                i = (i-'a'+x)%26+'a';
            }
        }
        cout << s << endl;
    }
}