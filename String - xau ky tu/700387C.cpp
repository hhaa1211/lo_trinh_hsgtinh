#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int x; cin >> x;
        cin.ignore();
        string s; getline(cin, s); 
        if (x==0){
            for (int i=0; i<s.length(); i++){
                s[i] = toupper(s[i]);
            }
        } else if (x==1){
            for (int i=0; i<s.length(); i++){
                s[i] = tolower(s[i]);
            }
        }
        cout << s << endl;
    }
}