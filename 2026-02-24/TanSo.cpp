//https://codeforces.com/group/NLfcjc5iua/contest/433147/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long Bang[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    long long n;
    cin >> n;

    for (long long i = 0; i < n; ++i)
    {
        long long k;
        cin >> k;

        while(k)
        {
            ++Bang[k%10];
            //cout << k%10 << " " << Bang[k%10] << endl;
            k /= 10;
        }
    }

    for (long long i = 0; i < 10; ++i) {cout << Bang[i] << " ";}

    return 0;
}

