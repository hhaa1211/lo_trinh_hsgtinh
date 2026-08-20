#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    vector<int> vec(3*n);
    for (int &i : vec){
        cin >> i;
    } 
    vector<long long> vec2(3*n, 0);
    priority_queue<int, vector<int>, greater<int>> pgt;
    long long cur_sum = 0;
    for (int i=0; i<2*n; i++){
        pgt.push(vec[i]);
        cur_sum += vec[i];
        if (pgt.size()>n){
            cur_sum -= pgt.top();
            pgt.pop();
        }
        if (i>=n-1){
            vec2[i] = cur_sum;
        }
    }
    vector<long long> vec3(3*n, 0);
    cur_sum = 0;
    priority_queue<int> pgg;
    for (int i=3*n-1; i>=n; i--){
        pgg.push(vec[i]);
        cur_sum += vec[i];
        if (pgg.size()>n){
            cur_sum -= pgg.top();
            pgg.pop();
        }
        if (i<=2*n){
            vec3[i] = cur_sum;
        }
    }
    long long res = -1e14;
    for (int k=n-1; k<2*n; k++){
        res = max(res, vec2[k]-vec3[k+1]);
    }
    cout << res;
}