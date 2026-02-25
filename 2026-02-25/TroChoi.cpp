//https://codeforces.com/group/NLfcjc5iua/contest/433147/problem/H

#include <bits/stdc++.h>
using namespace std;
const long MAXX = 1e5;
long long a[MAXX + 5];
vector <long long> clearA;



long long sol(){

    long long n;
    cin >> n;

    long long M1 = 0, M2 = 0;
    for (long long i = 0; i < n; ++i)
    {
        long long q;
        cin >> q;
        if (a[q] == 0) {clearA.push_back(q);} //
        ++a[q];

        long long aq = a[q];
        if (aq % 2 == 0)
        {
            if (q > M1)
            {
                M2 = M1;
                M1 = q;
            }
            else {M2 = max(M2, q);}
        }
    }
    //cout << M1 << " " << M2 << endl;

    for (long long i : clearA) {a[i] = 0;}
    clearA.clear();

    if (M1 != 0 && M2 != 0) {return M1*M2;}
    return -1;

}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long k;
    cin >> k;

    for (long long i = 0; i < k; ++i)
    {
        long long res = sol();
        cout << res << "\n";
    }



    return 0;
}
