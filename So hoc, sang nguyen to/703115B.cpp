#include <iostream>

using namespace std;

int arr[1000006];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    for (int i=1; i<=1000000; i++){
        for (int j=i; j<=1000000; j+=i){
            arr[j]++;
        }
    }
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        cout << arr[n] << '\n';
    }
}