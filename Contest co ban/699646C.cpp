#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    long long x;
    int c = 0;
    long double sum = 0;
    while (cin >> x){
        sum += x;
        c++;
    }
    cout << fixed << setprecision(6) << sum/c;
}