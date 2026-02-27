// https://codeforces.com/contest/2205/problem/B
#include <bits/stdc++.h>
using namespace std;


void sol(){

    long long n;
    cin >> n;

    long long k = 1;
    for (long long i = 2; i*i <= n; i++)
    {
        if (n % i == 0) //neu la uoc cua n
        {
            k *= i;
            while (n % i == 0) {n /= i;}
        }

    }

    if (n > 1) {k *= n;}

    cout << k << "\n";


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    for (long long i = 0; i < t; ++i)
    {
        sol();
    }

    return 0;
}
