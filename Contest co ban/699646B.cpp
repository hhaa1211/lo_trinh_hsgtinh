#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int a, b, c, d; 
    cin >> a >> b >> c >> d;
    int mark[101] = {0};
    for (int i=a; i<b; i++){
        mark[i]++;
    }
    for (int i=c; i<d; i++){
        mark[i]++;
    }
    int res = 0;
    for (int i=0; i<=100; i++){
        if (mark[i]){
            res++;
        }
    }
    cout << res;
}