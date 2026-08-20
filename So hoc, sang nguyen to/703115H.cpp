#include <iostream>

using namespace std;

int mark[1000006];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int ma_arr = 0;
    for (int i=1; i<=n; i++){
        int x; cin >> x; 
        ma_arr = max(ma_arr, x);
        mark[x]++;
    }
    for (int i=ma_arr; i>=1; i--){
        int c = 0;
        for (int j=i; j<=ma_arr; j+=i){
            if (mark[j]){
                c += mark[j];
            }
            if (c>=2){
                cout << i;
                return 0;
            }
        }
    }
}