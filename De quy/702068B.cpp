#include <iostream>

using namespace std;

int a[14];
int n;

void sinh(int x){
    if (x>n){
        for (int i=1; i<=n; i++){
            cout << a[i];
        }
        cout << '\n';
        return;
    }
    for (int i=0; i<=2; i++){
        a[x] = i;
        sinh(x+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n;
    sinh(1);
}