#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <algorithm>

using namespace std;

string cong(string a, string b){
    if (a.empty()) return b;
    if (b.empty()) return a;
    string res = "";
    int x = a.length()-1;
    int y = b.length()-1;
    int c = 0;
    while (x >= 0 || y >= 0 || c) {
        int sum = c; 
        if (x>=0) sum += (a[x--]-'0'); 
        if (y>=0) sum += (b[y--]-'0'); 
        res += (sum % 10) + '0'; 
        c = sum/10;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; getline(cin, s);
        stringstream ss(s);
        string tmp;
        string res = "";
        while (ss >> tmp){
            string sdt = "";
            for (char i : tmp){
                if (isdigit(i)){
                    sdt += i;
                }
            }
            res = cong(res, sdt);
        }
        cout << res << endl;
    }
}