#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    string s; cin >> s;
    int q; cin >> q;
    int n; 
    if (s.size()%2){
        n = s.size()/2+1;
    } else{
        n = s.size()/2;
    }
    vector<int> vec(n, 0);
    while (q--){
        int k; cin >> k;
        vec[k-1]++;
    }
    int cur_s = 0;
    for (int i=0; i<vec.size(); i++){
        cur_s += vec[i];
        if (cur_s%2){
            swap(s[i], s[s.size()-i-1]);
        }
    }
    cout << s;
}