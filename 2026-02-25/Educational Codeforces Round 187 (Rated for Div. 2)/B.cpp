// https://codeforces.com/contest/2203/problem/B

#include <bits/stdc++.h>
using namespace std;

void sol(string st){

    long long Bang[10] = {0,0,0,0,0,0,0,0,0,0};
    long long d = st.size();
    
    long long Sum = 0;
    for (long long i = 0; i < d; ++i)
    {
        ++Bang[st[i] - '0'];
        Sum += (st[i] - '0');
    }

    long long cnt = 0;
    long long Ngoai_Le = st[0] - '0';

    long long i = 9;
    while (Sum > 9 && i)
    {
        if (Bang[i] == 1 && i == Ngoai_Le) //xu li so dau tien != 0
        {
           Bang[1] = 1;
           --Bang[i];
           Sum -= i;
           ++Sum;
           ++cnt;

        }
        else if (Bang[i]  != 0)
        {
           --Bang[i];
           Sum -= i;
           ++cnt;
        }
        else {--i;}
    }


    cout << cnt << "\n";
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    for (long long i = 0; i < t; ++i)
    {
        string st;
        cin >> st;
        sol(st);

    }

    return 0;
}


