//https://codeforces.com/group/NLfcjc5iua/contest/433147/problem/J


#include <bits/stdc++.h>
using namespace std;

map <long long, long long> a;

int main(){
    long long n, k;
    cin >> n >> k;

    long long res = 0;
    for (long long i = 0; i < n; ++i)
    {
        //a - b = k
        // a = k + b
        long long b;
        cin >> b;

        res += a[b];
        ++a[k+b];

    }

    cout << res;

    return 0;
}

