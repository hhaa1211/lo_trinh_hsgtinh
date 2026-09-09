#include <iostream>
#include <map>

using namespace std;

typedef struct{
    int i, j;
} p;

int n, x; 
map<int, int> m;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> n;
    while (n--){
        cin >> x;
        m[x]++;
    }
    for (p i : m){
        
    }
}