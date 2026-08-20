#include <iostream>
#include <vector>

using namespace std;

void snt(vector<int> &vec, int n){
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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    vector<int> vec;
    snt(vec, n);
    long long res = 0;
    for (int i : vec){
        if (i>n){
            break;
        }
        res += i;
    }
    cout << res;
}