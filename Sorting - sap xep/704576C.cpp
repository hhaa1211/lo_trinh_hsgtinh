#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n; cin >> n;
    int a[n]; 
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    long long sum = 1;
    int cur_l = 1;
    for (int i=1; i<n; i++){
        if (a[i]>a[i-1]){
            cur_l++;
            sum += 1LL*cur_l;
        } else{
            sum += 1LL*cur_l;
        }
    }
    cout << sum;
}