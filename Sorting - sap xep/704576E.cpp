#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    vector<long long> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        long long o = 2LL * i - n + 1;
        sum += o*x[i];
        sum += o*y[i];
    }
    cout << sum << "\n";
}