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
    int ans = 0;
    for (int i=0; i<m; i++){
        while (ans<n && a[ans]<b[i]) ans++;
        cout << ans << ' ';    
    }
}