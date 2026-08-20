#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, x; cin >> n >> x;
    int ai;
    vector<pair<int, int>> a;
    for (int i=0; i<n; i++) {
        cin >> ai;
        a.push_back(make_pair(ai, i+1));
    }
    sort(a.begin(), a.end());
    for (int i=0; i<n-2; i++) {
        int l = i+1;
        int r = n-1;
        while (l<r) {
            long long curs = a[i].first+a[l].first+a[r].first;
            if (curs==x) {
                cout << a[i].second << ' ' << a[l].second << ' ' << a[r].second;
                return 0;
            } 
            else if (curs<x) {
                l++; 
            } 
            else {
                r--;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
}