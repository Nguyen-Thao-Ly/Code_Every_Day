//https://codeforces.com/group/NLfcjc5iua/contest/433147/problem/F

#include <bits/stdc++.h>
using namespace std;
long long Bang[26];

int main(){

    string st;
    cin >> st;
    long long kitu = 97;

    long long d = st.size();
    for (long long i = 0; i < d; ++i)
    {
        ++Bang[st[i] - 97];
    }

    for (long long i = 0; i < 26; ++i)
    {
        cout << Bang[i] << " ";
    }





    return 0;
}
