//https://codeforces.com/group/NLfcjc5iua/contest/433147/problem/U

#include <bits/stdc++.h>
using namespace std;

long long sol1(string st){

    long long cnt = 0;
    long long d = st.size();

    for (long long i = 0; i < d; ++i)
    {
        char old = st[i];
        ++cnt;
        for (long long j = i+1; j < d; ++j)
        {
            if (st[j] == old) {++cnt;}
        }
    }

    return cnt;



}

long long Bang[26];
long long sol2(string st){

    long long d = st.size();


    for (long long i = 0; i < d; ++i)
    {
        ++Bang[st[i] - 'a'];
    }

    long long kq = 0;
    for (long long i = 0; i < 26; ++i)
    {
        long long k = Bang[i];
        kq += k + (k*(k-1)/2);
    }

    return kq;

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string st;
    cin >> st;

    //long long kq1 = sol1(st);
    long long kq2 = sol2(st);
    //cout << kq1 << "\n";
    cout << kq2 << "\n";



    return 0;
}



/*
a b a b b b a a a b = 10
slA = 5
tong A = 5*4/2 = 10
slB = 5
tong B = 5*4/2 = 10
AB = 20
Kq = slA + slB + tongA + tongB






aba
ababbba
ababbbaa
ababbbaaa
abbba
abbbaa
abbbaaa
aa
aaa
aa
bab
babb
babbb
babbbaaab
bb
bbb
bbbaaab
bb
bbaaab
baaab
*/
