#include <iostream>
#include <vector>

using namespace std;

bool check(vector<vector<char>> &vec, int x, int y){
    if (vec[x][y]=='*'){
        return false;
    }
    for (int i=0; i<x; i++){
        if (vec[i][y]=='q'){
            return false;
        }
    }
    for (int i=1; i<8; i++){
        if (x-i>=0 && y-i>=0 && vec[x-i][y-i]=='q'){
            return false;
        }
    }
    for (int i=1; i<8; i++){
        if (x-i>=0 && y+i<=7 && vec[x-i][y+i]=='q'){
            return false;
        }
    }
    return true;
}

int sinh(vector<vector<char>> &vec, int i){
    if (i==8){
        return 1;
    }
    int ans = 0;
    for (int j=0; j<8; j++){
        if (check(vec, i, j)){
            vec[i][j] = 'q';
            ans += sinh(vec, i+1);
            vec[i][j] = '.';
        }
    }
    return ans;
}

int main(){
    freopen("queens.inp", "r", stdin);
    freopen("queens.out", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    vector<vector<char>> arr(8, vector<char>(8));
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            cin >> arr[i][j];
        }
    }
    cout << sinh(arr, 0);
}