#include <bits/stdc++.h>
#define maxn 1000006
#define f0(i,n) for(int i=0; i<n; i++)
#define f1(i,n) for(int i=1; i<=n; i++)
#define el cout<<'\n'
using namespace std;
int n = 8, a[] = {0, 1, 3, 5, 10, 15, 17, 20, 26};
int b[] = {0, -1, -3, -5, -10, -15, -17, -20, -26};
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    /// O(log)
    /// tìm phần tử đầu tiên < x
    /// tìm phần tử đầu tiên <= x
    /// greater trên mảng sắp xếp ngược
    cout << lower_bound(b+1, b+n+1, -5, greater<int>()) - b;
    cout << lower_bound(b+1, b+n+1, -6, greater<int>()) - b;
    cout << upper_bound(b+1, b+n+1, -5, greater<int>()) - b;
    cout << upper_bound(b+1, b+n+1, -6, greater<int>()) - b;
    return 0;
}