// https://codeforces.com/contest/2203/problem/A

#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    for (long long i = 0; i < t; ++i)
    {
        long long n, Gram, Ben;
        cin >> n >> Gram >> Ben;

        long long MAX = 1 + Ben/Gram;

        long long res = n/MAX;
        long long Du = n - res*MAX;
        if (Du != 0) {res += 1;}

        cout << res << "\n";

    }

    return 0;
}
