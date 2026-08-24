#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, q; cin >> n >> q;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    while (q--){
        int t, x; cin >> t >> x;
        int i;
        switch (t){
            case 1:
                i = lower_bound(a, a+n, x)-a;
                if (i!=n){
                    cout << a[i];
                } else{
                    cout << -1;
                }
                break;
            case 2:
                i = upper_bound(a, a+n, x)-a;
                if (i!=n){
                    cout << a[i];
                } else{
                    cout << -1;
                }
                break;
            case 3:
                i = upper_bound(a, a+n, x)-a;
                if (i==0){
                    cout << -1;
                } else{
                    cout << a[i-1];
                }
                break;
            case 4:
                i = lower_bound(a, a+n, x)-a;
                if (i==0){
                    cout << -1;
                } else{
                    cout << a[i-1];
                }
                break;
            case 5: {
                int l = lower_bound(a, a+n, x)-a;
                int r = upper_bound(a, a+n, x)-a;
                cout << r-l;
                break;
            }
        }
        cout << '\n';
    }
}