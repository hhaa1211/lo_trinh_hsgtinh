#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(nullptr);
    int n; cin >> n;
    int q;  cin >> q;
    while (q--){
        string s;  cin >> s;
        if (s == "&"){
            int x; cin >> x;
            n &= x;
        } else if (s == "|"){
            int x; cin >> x;
            n |= x;
        } else if (s == "^"){
            int x; cin >> x;
            n ^= x;
        } else if (s == "~"){
            n = ~n; 
        } else if (s == "set"){
            int i; cin >> i;
            n |= (1U << i);
        } else if (s == "clear"){
            int i; cin >> i;
            n &= ~(1U << i); 
        } else if (s == "toggle"){
            int i; cin >> i;
            n ^= (1U << i);
        }
        cout << bitset<32>((unsigned int)n) << ' ' << n << '\n';
    }

    return 0;
}