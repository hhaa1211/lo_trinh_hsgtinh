#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; long long s; cin >> n >> s;
    long long a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    long long ans = 0;
    long long cur_s = 0;
    int j = 0;
    for (int i=0; i<n; i++){
        cur_s += a[i];
        while (j<n && cur_s>=s){
            ans += n-i;
            cur_s -= a[j++];
        }
    }
    cout << ans;
}