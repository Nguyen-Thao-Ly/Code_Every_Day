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

        long long MAX = -1e9;
        long long cnt = 0;
        for (long long j = 0; j < n; ++j)
        {
            long long k;
            cin >> k;

            if (k > MAX)
            {
                MAX = k;
                cnt = 1;
            }
            else if (k == MAX) {++cnt;}

        }
        cout << cnt << "\n";
    }

    return 0;
}
