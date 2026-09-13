#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    long long n; cin >> n;
    int ans1 = 0, ans2, ans3;
    bool f2 = true, f3 = true;
    for (int i=62; i>=0; i--){
        if ((n>>i)&1){
            ans1++;
            if (f2){
                ans2 = i; f2 = false;
            }
        }
    } 
    for (int i=0; i<=62; i++){
        if ((n>>i)&1){
            if (f3){
                ans3 = i; f3 = false;
            }
        }
    }
    cout << ans1 << ' ' << ans2 << ' ' << ans3;
}