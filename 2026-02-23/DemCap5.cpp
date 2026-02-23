//https://codeforces.com/group/NLfcjc5iua/contest/433147/problem/M
//(ar-al) % k = 0 (l<r)



#include <bits/stdc++.h>
using namespace std;
const long MAXX = 1e5;
long long a[MAXX + 5];

map <long long, long long> a2;

long long sol1(long long n, long long k){

    long long cnt = 0;

    for (long long i = 0; i < n; ++i)
    {
        for (long long j = i+1; j < n; ++j)
        {
            if ((a[j] - a[i]) % k == 0) {++cnt;}
        }
    }

    return cnt;

}


int main(){
    long long n, k;
    cin >> n >> k;

    long long res = 0;
    for (long long i = 0; i < n; ++i)
    {
        cin >> a[i];

        //(ar-al) % k = 0 (l<r)
        //ar % k == al % k
        res += a2[a[i]%k];
        ++a2[a[i]%k];
    }

    long long res1 = sol1(n, k);
    cout << res1 << endl;

    //long long res2 = sol2(n);
    //cout << res2 << endl;


    cout << res;
    return 0;
}
