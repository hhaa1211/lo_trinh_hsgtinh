#include <iostream>
#include <vector>

using namespace std;

int n, s; 

int sinh(vector<int> &vec, int cur_s, int i){
    if (i==n){
        if (cur_s==s){
            return 1;
        } 
        return 0;
    }
    int sl = sinh(vec, cur_s+vec[i], i+1);
    int nsl = sinh(vec, cur_s, i+1);
    return sl+nsl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n >> s;
    vector<int> arr(n);
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    if (s==0){
        cout << sinh(arr, 0, 0)-1;
    } else{
        cout << sinh(arr, 0, 0);
    }
}