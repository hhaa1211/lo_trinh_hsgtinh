#include <iostream>

using namespace std;

unsigned long long fibo[93];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    fibo[0] = 1;
    fibo[1] = 1;
    for (int i=2; i<=92; i++){
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        cout << fibo[n] << '\n';
    }
}