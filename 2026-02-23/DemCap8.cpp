//http://codeforces.com/group/NLfcjc5iua/contest/433147/problem/K


#include <bits/stdc++.h>
using namespace std;
const long MAXX = 1e5;
long long a[MAXX + 5];

map <long long, long long> a2;

long long sol1(long long n){

    long long cnt = 0;

    for (long long i = 0; i < n; ++i)
    {
        for (long long j = i+1; j < n; ++j)
        {
            if (a[j] - a[i] == j - i) {++cnt;}
        }
    }

    return cnt;

}

long long sol2(long long n){

    long long res = 0;
    for (long long b = 0; b < n; ++b)
    {
        //ar - al = r - l
        //a[7] = 6
        //a[5] = 4
        //6 - 4 = 7 - 5
        //ar - r = al - l
        //long long b;
        //cin >> b;

        res += a2[a[b] - b];
        ++a2[a[b] - b];

    }

    return res;



}

int main(){
    long long n;
    cin >> n;

    long long res = 0;
    for (long long i = 0; i < n; ++i)
    {
        cin >> a[i];

        res += a2[a[i] - i];
        ++a2[a[i] - i];
    }

    //long long res1 = sol1(n);
    //cout << res1 << endl;

    //long long res2 = sol2(n);
    //cout << res2 << endl;


    cout << res;
    return 0;
}
