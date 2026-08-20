#include <iostream>
#include <vector>

using namespace std;

int n; 
vector<int> arr;
vector<bool> used;

void sinh(int i){
    if (i==n){
        for (int i : arr){
            cout << i;
        }
        cout << '\n';
        return;
    }
    for (int j=1; j<=n; j++){
        if (!used[j]){
            used[j] = true;
            arr.push_back(j);
            sinh(i+1);
            arr.pop_back();
            used[j] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n;
    used.resize(n+1, false);
    sinh(0);
}