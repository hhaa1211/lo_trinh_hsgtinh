#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n;cin >> n; int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int m; cin >> m; int b[m];
    for (int i=0; i<m; i++){
        cin >> b[i];
    }
    int c[n+m];
    string ans = "";
    int x = 0, y = 0, i = 0;
    while (x<n && y<m){
        if (a[x]<=b[y]){
            c[i++] = a[x++];
            ans += 'a'; 
        } else{
            c[i++] = b[y++];
            ans += 'b';
        }
    }
    while (x<n){
        c[i++] = a[x++];
        ans += 'a';
    }
    while (y<m){
        c[i++] = b[y++];
        ans += 'b';
    }
    for (int i=0; i<n+m; i++){
        cout << c[i] << ' ';
    }
    cout << '\n';
    cout << ans;
}