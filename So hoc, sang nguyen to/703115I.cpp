#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec;
bool mark[1000006];

void snt(){
    for (int i=3; i*i<1000006; i+=2){
        if (!mark[i]){
            for (int j=i*i; j<1000006; j+=2*i){
                mark[j] = true;
            }
        }
    }
    vec.push_back(2);
    for (int i=3; i<1000006; i+=2){
        if (!mark[i]){
            vec.push_back(i);
        }
    }
}

int main(){
    freopen("PRIME.INP", "r", stdin);
    freopen("PRIME.OUT", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    snt();
    int n; cin >> n;
    int arr[n];
    int ma_arr = 0;
    for (int i=0; i<n; i++){
        cin >> arr[i];
        ma_arr = max(arr[i], ma_arr);
    }
    vector<int> arr_res(ma_arr+1, 0);
    for (int i : vec){
        for (int j=i; j<=ma_arr; j+=i){
            arr_res[j]++;
        }
    }
    int res = 0, res1 = 0;
    for (int i : arr){
        if (arr_res[i]>res){
            res = arr_res[i];
            res1 = i;
        }
    }
    cout << res1;
}