#include <iostream>
#include <algorithm>

using namespace std;

bool cp(pair<int, int> a, pair<int, int> b){
    return (a.first-a.second)<(b.first-b.second);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int sum = 0;
    pair<int, int> arr[2*n];
    for (int i=0; i<2*n; i++){
        int a, b; cin >> a >> b;
        sum += b;
        arr[i] = {a, b};
    }
    sort(arr, arr+2*n, cp);
    for (int i=0; i<n; i++){
        sum += arr[i].first-arr[i].second;
    }
    cout << sum;
}