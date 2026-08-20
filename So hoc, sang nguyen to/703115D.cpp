#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    long long n;
    cin >> n;
    long long c = 0;
    while (n>=5) {
        c += n / 5;
        n /= 5;
    }
    cout << c << "\n";
}