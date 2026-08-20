#include <iostream>
#include <map>
#include <vector>
#include <utility>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    map<int, vector<int>> m;
    for (int i=1; i<=t; i++){
        int x; cin >> x;
        m[x].push_back(i);
    }
    for (pair<int, vector<int>> i : m){
        cout << i.first << '\n';
        for (int j=0; j<i.second.size(); j++){
            cout << i.second[j] << ' ';
        }
        cout << '\n';
    }
}