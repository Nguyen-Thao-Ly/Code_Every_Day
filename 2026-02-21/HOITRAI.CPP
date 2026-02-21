#include <bits/stdc++.h>
using namespace std;


long long sol1(string st){
    long long S = 0;
    long long MAX = 0;
    long long d = st.size();

    for (long long i = 0; i < d; ++i)
    {
        char k = st[i];

        if ('0' <= k && k <= '9')
        {
            S *= 10;
            S += (k - '0');
        }

        else
        {
            MAX += S;
            S = 0;
        }
    }

    MAX += S;

    return MAX;
}


int main() {
    freopen("HOITRAI.INP", "r", stdin);
    freopen("HOITRAI.OUT", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    string st;
    cin >> st;


    long long kq;
    kq = sol1(st);

    cout << kq;
}

