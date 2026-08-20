#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        int a[n], b[n];
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        for (int i=0; i<n; i++){
            cin >> b[i];
        }
        priority_queue<pair<int, int>> pq;
        long long cur_sum = 0;
        for (int i=0; i<k; i++){
            pq.push({a[i], i});
            cur_sum += b[i];
        }
        for (int i=k; i<n; i++){
            long long tmp = cur_sum*pq.top().first;
            long long tmp2 = (cur_sum-b[pq.top().second]+b[i])*a[i];
            if (tmp2<tmp){
                cur_sum = cur_sum-b[pq.top().second]+b[i];
                pq.pop(); pq.push({a[i], i});
            }
        }
        cout << cur_sum*pq.top().first << '\n';
    }
}