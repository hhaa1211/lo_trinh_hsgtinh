#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool cp(string a, string b){
    return (a+b)<(b+a);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    string a[n]; 
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n, cp);
    string ans = "";
    for (int i=n-1; i>-1; i--){
        ans += a[i];
    }
    cout << ans;
}