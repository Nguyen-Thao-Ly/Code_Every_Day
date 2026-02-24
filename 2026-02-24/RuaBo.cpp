//https://codeforces.com/group/NLfcjc5iua/contest/433147/problem/A

#include <bits/stdc++.h>
using namespace std;
const long MAXX = 1e6;
long long a[MAXX + 5];


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    for (long long i = 0; i < n; ++i)
    {
        long long k;
        cin >> k;
        ++a[k];
    }

    long long q;
    cin >> q;

     for (long long i = 0; i < q; ++i)
        {
            long long k;
            cin >> k;
            cout << a[k] << endl;
        }

    return 0;
}
