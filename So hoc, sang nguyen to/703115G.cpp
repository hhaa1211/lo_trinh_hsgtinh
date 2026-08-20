#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void snt(vector<int> &vec, int n){
    n = min(32000, n);
    vector<bool> arr(n+1, false);
    for (int i=3; i*i<=n; i+=2){
        if (!arr[i]){
            for (int j=i*i; j<=n; j+=2*i){
                arr[j] = true;
            }
        }
    }
    vec.push_back(2);
    for (int i=3; i<=n; i+=2){
        if (!arr[i]){
            vec.push_back(i);
        }
    }
}

bool isp(long long n){
    for (long long i=2; i*i<=n; i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    bool flag = false;
    vector<int> vec;
    snt(vec, n);
    for (int i : vec){
        long long tmp = 4+(long long)i*i;
        if (tmp>n) break;
        if (isp(tmp)){
            cout << 2 << ' ' << i << ' ' << tmp << '\n';
            flag = true;
        }
    }
    if (!flag){
        cout << -1;
    }
}