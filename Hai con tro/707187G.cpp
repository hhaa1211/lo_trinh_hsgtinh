#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int dn = 0;
    long long ans = 0;
    int l = 0;
    unordered_map<int, int> m;
    for (int i=0; i<n; i++){
        if (m[a[i]]==0){
            dn++;
        }
        m[a[i]]++;
        while (dn>k){
            m[a[l]]--;
            if (m[a[l]]==0){
                dn--;
            }
            l++;
        }
        ans += i-l+1;
    }
    cout << ans;
}