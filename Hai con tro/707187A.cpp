#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    long long cur_s = 0; 
    for (int i=0; i<k; i++){
        cur_s += a[i];
    }
    long long ans = cur_s;
    for (int i=k; i<n; i++){
        cur_s = cur_s-a[i-k]+a[i];
        ans = max(ans, cur_s);
    }
    cout << ans;
}