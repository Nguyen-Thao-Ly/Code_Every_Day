    //https://codeforces.com/group/NLfcjc5iua/contest/433147/problem/D

    #include <bits/stdc++.h>
    using namespace std;
    const long MAXX = 1e5;
    long long a[MAXX +5];

    int main(){

        long long n;
        cin >> n;

        long long cntMAX = 0, MAX = 0;
        for (long long i = 0; i < n; ++i)
        {
            long long k;
            cin >> k;
            ++a[k];

            if (a[k] > cntMAX)
            {
                cntMAX = a[k];
                MAX = 1;
            }

            if (a[k] == cntMAX)
            {
                cntMAX = a[k];
                ++MAX;
            }

        }

        cout << cntMAX << " " << MAX;

        return 0;
    }
