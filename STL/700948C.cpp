#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    map<string, int> m;
    while (t--){
        string s; cin >> s;
        if (s=="add"){
            string x; cin >> x;
            m[x]++;
        } else if (s=="del"){
            string x; cin >> x;
            if (m.find(x)!=m.end()){
                m.erase(x);
            }
        } else if (s=="count"){
            string x; cin >> x;
            if (m.find(x)!=m.end()){
                cout << m[x];
            } else{
                cout << 0;
            }
            cout << "\n";
        } else{
            cout << m.size() << "\n";;
        }
    }
}