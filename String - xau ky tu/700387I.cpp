#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string s, t; cin >> s >> t;
        vector<int> idx;
        for (int i=0; i<s.length(); i++){
            if (s[i]==t[0]){
                idx.push_back(i);
            }
        }
        int res = 0;
        for (int i : idx){
            int x = 0;
            int flag = 1;
            for (int y=i; x<t.length(); y++){
                if (y>=s.length() || s[y]!=t[x++]){
                    flag = 0;
                    break;
                }
            }
            if (flag && x==t.length()){
                res++;
            }
        }
        cout << res << endl;
    }
}