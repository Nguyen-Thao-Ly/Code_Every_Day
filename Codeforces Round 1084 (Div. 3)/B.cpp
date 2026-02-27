#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    for (long long i = 0; i < t; ++i)
    {
        long long n;
        cin >> n;

        long long a;
        cin >> a;
        bool flag = 1;
        for (long long j = 1; j < n; ++j)
        {
            long long b;
            cin >> b;

            if (b >= a) {a = b;}
            else {flag = 0;}

        }
        if (flag == 0) {cout << 1 << "\n";}
        else {cout << n << "\n";}
    }

    return 0;
}

