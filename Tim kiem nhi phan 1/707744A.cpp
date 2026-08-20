#include <iostream>

using namespace std;

bool bn(int l, int r, const int a[], int tar){
    while (l<=r){
        int m = (l+r)/2;
        if (a[m]==tar){
            return true;
        } else if (a[m]<tar){
            l = m+1;
        } else{
            r = m-1;
        }
    }
    return false;
}

int bfn(int l, int r, const int a[], int tar){
    int res = -1;
    while (l<=r){
        int m = (l+r)/2;
        if (a[m]>=tar){
            r = m-1;
            if (a[m]==tar){
                res = m+1;
            }
        } else{
            l = m+1;
        }
    }
    return res;
}

int bln(int l, int r, const int a[], int tar){
    int res = -1;
    while (l<=r){
        int m = (l+r)/2;
        if (a[m]<=tar){
            l = m+1;
            if (a[m]==tar){
                res = m+1;
            }
        } else{
            r = m-1;
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); 
    int n, q; cin >> n >> q;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    while (q--){
        int t, x; cin >> t >> x;
        switch (t){
            case 1:
                if (bn(0, n-1, a, x)){
                    cout << "YES";
                } else{
                    cout << -1;
                }
                break;
            case 2:
                cout << bfn(0, n-1, a, x);
                break;
            case 3:
                cout << bln(0, n-1, a, x);
                break;
        }
        cout << '\n';
    }
}