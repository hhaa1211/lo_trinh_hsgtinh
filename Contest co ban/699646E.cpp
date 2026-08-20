#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int gtri(string s){
    if (s == "A") return 11;
    if (s == "J" || s == "Q" || s == "K") return 10;
    return stoi(s);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--){
        string a, b;
        cin >> a >> b;
        if ((a=="A" && gtri(b)==10) || (b=="A" && gtri(a)==10)){
            cout << "Blackjack\n";
            continue;
        }
        int sum = gtri(a)+gtri(b);
        if (sum>21){
            if (a=="A"){
                sum -= 10;
            } else if (b=="A"){
                sum -= 10;
            }
        }
        int res = sum;
        if (sum<=10){
            res += 11;
        } else{
            for (int i=1; i<=10; i++){
                if (sum+i<=21){
                    res = max(res, sum+i);
                }
            }
        }
        cout << res << endl;
    }
}