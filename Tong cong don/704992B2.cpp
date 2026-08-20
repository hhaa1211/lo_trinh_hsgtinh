#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t, k; cin >> t >> k;
    int c = 99/k+1;
    while (t--){
        int a, b; cin >> a >> b;
        long long fb = 1LL*(b/100)*c+(b%100)/k+1;
        long long fa1 = 1LL*((a-1)/100)*c+((a-1)%100)/k+1;
        cout << fb-fa1 << '\n';
    }
}