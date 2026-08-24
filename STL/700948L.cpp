#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    freopen("minkseq.inp", "r", stdin);
    freopen("minkseq.out", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        pair<int, int> a[n];
        for (int i=0; i<n; i++){
            cin >> a[i].first;
        }
        for (int i=0; i<n; i++){
            cin >> a[i].second;
        }
        sort(a, a+n);
        long long s = 0;
        long long ans = 1e18;
        priority_queue<int> q;
        for (int i=1; i<=n; i++){
            if (i>=k){
                ans = min(ans, 1LL*a[i-1].first*(a[i-1].second+s));
            }
            q.push(a[i-1].second);
            s += a[i-1].second;
            if (q.size()==k){
                s -= q.top();
                q.pop();
            }
        }
        cout << ans << '\n';
    }
}