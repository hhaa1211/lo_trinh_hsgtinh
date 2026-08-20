#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void xoa0(string &s){
    int i = s.length()-1;
    while (i>=0 && s[i]=='0'){
        s.pop_back();
        i--;
    }
}

string cong(string a, string b){
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
    xoa0(res);
    reverse(res.begin(), res.end());
    return res;
}

string tru(string a, string b){
    if (b.length()>a.length() || (a.length()==b.length() && b>a)) swap(a, b);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string res = "";
    int c = 0;
    while (b.length()<a.length()){
        b += '0';
    }
    for (int i=0; i<b.length(); i++){
        int sum = a[i]-b[i]-c;
        if (sum<0){
            sum += 10;
            c = 1;
        } else{
            c = 0;
        }
        res += (sum+'0');
    }
    xoa0(res);
    reverse(res.begin(), res.end());
    if (res.empty()){
        return "0";
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        char x; cin >> x;
        string a, b; cin >> a >> b;
        if (x=='+'){
            cout << cong(a, b);
        } else{
            cout << tru(a, b);
        }
        cout << endl;
    }
}