#include <iostream>
#include <vector>

using namespace std;

int n;
vector<string> res1;
vector<char> vec;

int sinh(int snm, int snd, int i){
    if (i==2*n){
        string tmp = "";
        for (int j=0; j<2*n; j++){
            tmp += vec[j];
        }
        res1.push_back(tmp);
        return 1;
    }
    int m = 0;
    if (snm<n){
        vec.push_back('(');
        m = sinh(snm+1, snd, i+1);
        vec.pop_back();
    }
    int d = 0;
    if (snd<snm){
        vec.push_back(')');
        d = sinh(snm, snd+1, i+1);
        vec.pop_back();
    }
    return m+d;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n;
    int res = 0;
    res += sinh(0, 0, 0);
    cout << res << '\n';
    for (string i : res1){
        cout << i << '\n';
    }
}