#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    long long s; cin >> s;
    int a[n]; 
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    long long cur_s = 0;
    int j = 0, ans = 0;
    for (int i=0; i<n; i++){
        cur_s += a[i];
        while (j<n && cur_s>s){
            cur_s -= a[j++];
        }
        ans = max(ans, i-j+1);
    }
    cout << ans;
}