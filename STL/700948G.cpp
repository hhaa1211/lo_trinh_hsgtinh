#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

string itos(int x){
    string res = "";
    while (x){
        res += x%10;
        x /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, m; cin >> n >> m;
    set<string> st0;
    for (int i=0; i<n; i++){
        set<string> st;
        for (int j=0; j<m; j++){
            int x; cin >> x;
            st.insert(itos(x));
        }
        string res = "";
        for (string s : st){
            res += s;
        }
        st0.insert(res);
    }
    cout << st0.size();
}