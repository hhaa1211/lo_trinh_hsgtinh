#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    int n, m; cin >> n >> m;
    int a[n], b[m];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<m; i++){
        cin >> b[i];
    }
    long long ans = 0;
    int l = 0, r = 0;
    for (int i=0; i<m; i++){
        while (l<n && a[l]<b[i]) l++;
        while (r<n && a[r]<=b[i]) r++;
        ans += r-l;
    }
    cout << ans;
}