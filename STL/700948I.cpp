#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> vec(n, vector<int> (m));
    vector<long long> sumr(n);
    vector<long long> sumc(m);
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> vec[i][j];
            sumr[i] += 1LL*vec[i][j];
            sumc[j] += 1LL*vec[i][j];
        }
    }
    char c; 
    while (q--){
        cin >> c;
        if (c=='1'){
            int i, j; cin >> i >> j;
            swap(vec[i-1], vec[j-1]);
            swap(sumr[i-1], sumr[j-1]);
        } else if (c=='2'){
            int i, j, x; cin >> i >> j >> x;
            sumr[i-1] += 1LL*(x-vec[i-1][j-1]);
            sumc[j-1] += 1LL*(x-vec[i-1][j-1]);
            vec[i-1][j-1] = x;
        } else if (c=='r'){
            int i; cin >> i;
            cout << sumr[i-1] << '\n';
        } else{
            int i; cin >> i;
            cout << sumc[i-1] << '\n';
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << vec[i][j] << ' ';
        }
        cout << '\n';
    }
}