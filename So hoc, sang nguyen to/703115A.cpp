#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    long long n; cin >> n;
    long long c = 0;
    for (long long i=1; i*i<=n; i++){
        if (n%i==0){
            c++;
            if (n/i!=i){
                c++;
            }
        }
    }
    cout << c;
}