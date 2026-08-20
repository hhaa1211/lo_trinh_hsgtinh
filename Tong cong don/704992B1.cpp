#include <iostream>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int a[n]; 
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    long long pfa[n+1] ={0};
    for (int i=1; i<=n; i++){
        pfa[i] = pfa[i-1]+a[i-1];
    }
    map<long long, int> m;
    m[0]++;
    long long ans = 0;
    for (int i=1; i<=n; i++){
        if (m.find(pfa[i])!=m.end()){
            ans += m[pfa[i]];
        }
        m[pfa[i]]++;
    }
    cout << ans;
}