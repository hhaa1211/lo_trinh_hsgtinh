#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    string s; cin >> s;
    int a[26] = {};
    for (char i : s){
        a[i-'a']++;
    }
    for (int i=0; i<26; i++){
        if (a[i]!=0){
            cout << (char)(i+'a') << ' ' << a[i] << endl;
        }
    }
}