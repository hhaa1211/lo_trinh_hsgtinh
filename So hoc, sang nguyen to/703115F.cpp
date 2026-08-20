#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, p; cin >> n >> p;
    int res = 10000007;
    vector<pair<int, int>> vec;
    for (int i=2; i*i<=p; i++){
        if (p%i==0){
            vec.push_back({i, 0});
            while (p%i==0){
                vec[vec.size()-1].second++;
                p /= i;
            }
        }
    }
    if (p>1){
        vec.push_back({p, 1});
    }
    for (pair<int, int> i : vec){
        int c = 0, tmp = n;
        while (tmp>0){
            c += tmp/i.first;
            tmp /= i.first;
        }
        res = min(res, c/i.second);
    }
    cout << res;
}