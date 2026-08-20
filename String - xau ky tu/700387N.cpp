#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        long long res = 0;
        for (int i=0; i<n; ){
            long long k = 1;
            while (i+k<n && s[i+k]==s[i]) k++;
            res += k*(k-1)/2;
            i += k;
        }
        cout << res << endl;
    }
}