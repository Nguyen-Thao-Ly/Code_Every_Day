//https://codeforces.com/group/NLfcjc5iua/contest/433147/problem/G

#include <bits/stdc++.h>
using namespace std;
long long Bang[26];


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string st;
    cin >> st;

    long long d = st.size();
    long long cntMAX = 0;
    char MAX;
    for (long long i = 0; i < d; ++i)
    {
        char k = st[i];

        ++Bang[k - 97];

        if (Bang[k - 97] > cntMAX)
        {
            cntMAX = Bang[k - 97];
            MAX = k;
        }

        else if (Bang[k - 97] == cntMAX)
        {
            if (k < MAX)  {MAX = k;}
            //cout << MAX << " " << a[k] << " " << k << endl;
        }

    }

    cout << MAX << " " << cntMAX;

    return 0;
}
