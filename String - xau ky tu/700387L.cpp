#include <iostream>
#include <string>

using namespace std;

int gtri(char s){
    switch (s){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
}

int gtri(string s){
    if (s == "IV") return 4;
    if (s == "IX") return 9;
    if (s == "XL") return 40;
    if (s == "XC") return 90;
    if (s == "CD") return 400;
    if (s == "CM") return 900;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        string s; cin >> s;
        int res = 0;
        for (int i=0; i<s.length();){
            if ((s[i]=='I' || s[i]=='X' || s[i]=='C') && i<s.length()-1){
                int flag = 0;
                if (s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')){
                    string tmp = "";
                    tmp += s[i]; tmp += s[i+1];
                    res += gtri(tmp);
                    flag = 1;
                }
                if (s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')){
                    string tmp = "";
                    tmp += s[i]; tmp += s[i+1];
                    res += gtri(tmp);
                    flag = 1;
                }
                if (s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')){
                    string tmp = "";
                    tmp += s[i]; tmp += s[i+1];
                    res += gtri(tmp);
                    flag = 1;
                }
                if (flag){
                    i += 2;
                    continue;
                }
            }
            res += gtri(s[i]);
            i++;
        }
        cout << res << endl;
    }
}