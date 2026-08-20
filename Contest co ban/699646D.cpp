#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    int a[n][n];
    int t = 0, r = n-1, b = n-1, l = 0; 
    int j = 1;
    while (t<=b && l<=r){
        for (int i=l; i<=r; i++){
            a[t][i] = j++;
        }
        t++;
        for (int i=t; i<=b; i++){
            a[i][r] = j++;
        } 
        r--;
        for (int i=r; i>=l; i--){
            a[b][i] = j++;
        } 
        b--;
        for (int i=b; i>=t; i--){
            a[i][l] = j++;
        }
        l++;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << a[i][j] << ' ';
        }
        cout << "\n";
    }
}