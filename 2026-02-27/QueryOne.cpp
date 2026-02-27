// https://codeforces.com/group/NLfcjc5iua/contest/425345/problem/A

#include <bits/stdc++.h>
using namespace std;
const long MAXX = 1e5;
//long long a[MAXX + 5];
long long p[MAXX + 5];

/*
long long sol1(long long n, long long h, long long k){

    long long S = a[h];
    for (long long i = h+1; i <= k; ++i) {S += a[i];}

    return S;
}


long long sol2(long long n, long long h, long long k){

    return p[k]-p[h-1];

}

*/

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    cin >> p[0];

    for (long long i = 1; i < n; ++i)
    {
        cin >> p[i];
        p[i] += p[i-1];
    }


    long long t;
    cin >> t;

    for (long long i = 0; i < t; ++i)
    {
        long long a,b;
        cin >> a >> b;
        cout << p[b-1]-p[a-2] << "\n";
    }

    return 0;
}

/*

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    long long tam = 0;
    for (long long i = 0; i < n; ++i)
    {
        cin >> a[i];
        tam += a[i];
        p[i] = tam;

    }

    long long k;
    cin >> k;

    for (long long i = 0; i < k; ++i)
    {
        long long h, k;
        cin >> h >> k;

        long long kq1 = sol1(n,h-1,k-1);
        cout << kq1 << " ";

        long long kq2 = sol2(n,h-1,k-1);
        cout << kq2 << " ";

    }

    cout << endl;

    for (long long i = 0; i < n; ++i)
    {
        cout << p[i] << " ";
    }



    return 0;
}
*/
