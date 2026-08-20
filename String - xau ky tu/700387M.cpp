#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        if (isdigit(s[0])){
            for (int i=0; i<n; ){
                int k = 0;
                string res = "";
                while (i+k<n && isdigit(s[i+k])) {
                    res += s[i+k];
                    k++;
                }
                int cnt = stoi(res);
                for (int j=1; j<=cnt; j++){
                    cout << s[i+k];
                }
                i += k + 1;
            } 
        } else{
            for (int i=0; i<n; ){
                int j = 1;
                while (i+j<n && s[i+j]==s[i]){
                    j++;
                }
                cout << j << s[i];
                i += j;
            }
        }
        cout << endl;
    }
}