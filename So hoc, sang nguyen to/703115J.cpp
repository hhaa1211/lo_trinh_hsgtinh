#include <iostream>
#include <vector>
#include <map>
#include <utility>

using namespace std;

#define mod 1000000007

long long rp(long long a, int b){
    if (b==0){
        return 1;
    }
    long long tmp = rp(a, b/2);
    if (b%2){
        return (a*((tmp*tmp)%mod))%mod;
    } else{
        return (tmp*tmp)%mod;
    }
}

void snt(vector<int> &vec){
    bool arr[100000] = {false};
    for (int i=3; i*i<100000; i+=2){
        if (!arr[i]){
            for (int j=i*i; j<100000; j+=2*i){
                arr[j] = true;
            }
        }
    }
    vec.push_back(2);
    for (int i=3; i<100000; i+=2){
        if (!arr[i]){
            vec.push_back(i);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    vector<int> arr;
    snt(arr);
    int n, q; cin >> n >> q;
    vector<map<int, int>> vec(n);
    for (int i=0; i<n; i++){
        int x; cin >> x;
        for (int j : arr){
            if (j*j>x){
                break;
            } else{
                if (x%j==0){
                    while (x%j==0){
                        x /= j;
                        vec[i][j]++;
                    }
                }
            }
        }
        if (x>1){
            vec[i][x]++;
        }
    } 
    map<int, int> m;
    for (int i=0; i<n; i++){
        for (pair<int, int> j : vec[i]){
            if (m.find(j.first)!=m.end()){
                m[j.first] = max(m[j.first], j.second);
            } else{
                m[j.first] = j.second;
            }
        }
    }
    long long ans = 1;
    for (pair<int, int> p : m){
        ans = (ans*rp(1LL*p.first, p.second))%mod;
    
    }
    while (q--){
        int i, x; cin >> i >> x;
        for (int j : arr){
            if (j*j>x){
                break;
            } else{
                if (x%j==0){
                    int c = 0;
                    while (x%j==0){
                        x /= j;
                        c++;
                    }
                    vec[i-1][j] += c;
                    if (vec[i-1][j]>m[j]){
                        ans = (ans*rp(j, vec[i-1][j]-m[j]))%mod;
                        m[j] = vec[i-1][j];
                    }
                }
            }
        }
        if (x>1){
            vec[i-1][x] += 1;
            if (vec[i-1][x]>m[x]){
                ans = (ans*rp(x, vec[i-1][x]-m[x]))%mod;
                m[x] = vec[i-1][x];
            }
        }
        cout << ans << '\n';
    }
}
