#include <iostream>
#include <algorithm>

using namespace std;

bool check(const int a[], int n, long long tar, int b){
    long long ans = 0;
    for (int i=n/2; i<n; i++){
        if (a[i]<tar){
            ans += tar-a[i];
        }
    }
    return ans<=b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, k; cin >> n >> k;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    } 
    sort(a, a+n);
    long long l = a[n/2], r = a[n-1]+k;
    long long ans = l;
    while (l<=r){
        long long m = (l+r)/2;
        if (check(a, n, m, k)){
            ans = m;
            l = m+1;
        } else{
            r = m-1;
        }
    }
    cout << ans;
}