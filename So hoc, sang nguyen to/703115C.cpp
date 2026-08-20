#include <iostream>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    long long n; cin >> n;
    int c = 0;
    map<long long, int> m;
    for (long long i=2; i*i<=n; i++){
        if (n%i==0){
            int j = 0;
            while (n%i==0){
                n /= i;
                j++;
            }
            c++;
            m[i] = j;
        }
    }
    if (n>1) {
        c++;
        m[n] = 1;
    }
    cout << c << '\n';
    for (pair<long long, int> p : m){
        cout << p.first << ' ' << p.second;
        cout << '\n';
    }
}