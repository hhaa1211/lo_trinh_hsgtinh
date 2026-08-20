#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    long double s; cin >> s;
    long double l = 0, r = s;
    long double ans;
    for (int i=0; i<100; i++){
        long double m = (l+r)/2;
        long double f = m*m+sqrtl(m);
        if (f>s){
            r = m;
        } else{
            l = m;
        }
    }
    cout << fixed << setprecision(6) << l;
}