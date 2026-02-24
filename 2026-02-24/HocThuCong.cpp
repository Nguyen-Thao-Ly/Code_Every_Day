
//https://codeforces.com/group/NLfcjc5iua/contest/433147/problem/A

#include <bits/stdc++.h>
using namespace std;
const long MAXX = 2*1e3;
long long a[MAXX + 5];


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    long long n;
    cin >> n;

    long long Tong_The = 0;
    long long TamGiac = 0;
    for (long long i = 0; i < n; ++i)
    {
        long long k;
        cin >> k;
        Tong_The += 1;

        ++a[k];
        if (a[k] == 3) {++TamGiac; a[k] = 0;}
    }

    cout << TamGiac << " " << Tong_The - (TamGiac*3);

    return 0;
}

