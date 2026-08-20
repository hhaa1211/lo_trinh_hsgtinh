#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    vector<string> vec;
    int t; 
    cin >> t;
    while (t--){
        string s;
        cin >> s; 
        if (s=="push"){
            string x; 
            cin >> x; 
            vec.push_back(x);
        } 
        else if (s=="pop"){
            if (!vec.empty()){ 
                vec.pop_back();
            }
        } 
        else if (s=="index"){
            int k; 
            cin >> k; 
            if (k<1 || k>vec.size()){
                cout << -1 << "\n";
            } else {
                cout << vec[k-1] << "\n";
            }
        } 
        else {
            cout << vec.size() << "\n";
        }
    }
}