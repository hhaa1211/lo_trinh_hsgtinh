#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
void pre(long long r, vector<int> &vec){
    long long sqr = sqrt(r);
    if (sqr<2) return; 
    vector<bool> arr(sqr+1, true);
    for (long long i=3; i*i<=sqr; i+=2){
        if (arr[i]){
            for (long long j=i*i; j<=sqr; j+=2*i){
                arr[j] = false;
            }
        }
    }
    vec.push_back(2);
    for (long long i=3; i<=sqr; i+=2){
        if (arr[i]){
            vec.push_back(i);
        }
    }
}
 
void snt(long long l, long long r, const vector<int> &vec1){
    vector<bool> a(r - l + 1, true);
    for (int i : vec1){
        long long start = max(1LL*i*i, (l+i-1)/i*i);
        for (long long j=start; j<=r; j+=i){
            a[j-l] = false;
        }
    }
    long long sum = 0;
    for (long long i = max(2LL, l); i<=r; i++){
        if (a[i-l]){
            sum += i;
        }
    }
    cout << sum << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    long long l, r; 
    cin >> l >> r;
    vector<int> pres;
    pre(r, pres);
    snt(l, r, pres);
}