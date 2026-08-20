#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n; cin >> n;
    if ((n%400==0) || (n%4==0 && n%100)){
        cout << "Yes";
    } else{
        cout << "No";
    }
}