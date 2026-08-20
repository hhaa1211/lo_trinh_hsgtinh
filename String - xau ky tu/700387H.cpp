#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        if (s.length()<8){
            cout << "WEAK\n";
            continue;
        }
        int n = 0, ih = 0, it = 0;
        for (char i : s){
            if (isdigit(i)){
                n++;
            } else if (isupper(i)){
                ih++;
            } else{
                it++;
            }
        }
        if (n>=1 && ih >= 1 && it>=1){
                cout << "STRONG";
        } else{
            cout << "WEAK"; 
        }
        cout << endl;
    }
}