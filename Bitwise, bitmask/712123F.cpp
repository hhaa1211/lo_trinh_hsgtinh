#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    long long b; cin >> b;
    int k;
    if (b==0){
        cout << 1;
        return 0;
    }
    for (int i=62; i>=0; i--){
        if ((b>>i)&1){
            k = i; break;
        }
    }
    int c = 0;
    for (int i=k; i>=0; i--){
        if (!((b>>i)&1)){
            c++;
        }
    }
    unsigned long long ans = 1;
    for (int i=0; i<c; i++){
        ans *= 2;
    }
    cout << ans;
}