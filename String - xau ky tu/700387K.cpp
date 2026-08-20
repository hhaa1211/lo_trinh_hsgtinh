#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); 
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        string res = "";
        res += s[s.length()-1];
        int j = 0;
        for (int i=s.length()-2; i>=0; i--){
            if (s[i]>=res[j]){
                res += s[i];
                j++;
            }
        }
        reverse(res.begin(), res.end());
        cout << res << endl;
    }
}