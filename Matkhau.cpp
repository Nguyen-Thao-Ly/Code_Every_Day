//https://oj.vnoi.info/problem/nvnamson_matkhau

#include <bits/stdc++.h>
using namespace std;
const long MAXX = 1e7;
bool a[MAXX + 5];

void SangNgto(long long R){
    a[0] = true;
    a[1] = true;

    for (long long i = 3; i <= R; i += 2)
    {
        if (a[i] == false)
        {
            for (long long j = i*i; j <= R; j += i)
                {a[j] = true;}
        }
    }

}


long long SumN(long long n){
    long long Sum = 0;

    while(n)
    {
        Sum += n%10;
        n /= 10;
    }

    return Sum;

}

void sol(long long L, long long R){

    SangNgto(R);


    if (L <= 2) {cout << 2 << " ";}
    if (L%2 == 0) {++L;}
    for (long long i = L; i <= R; i += 2)
    {
        if (a[i] == false)
        {
            long long Sum = SumN(i);

            if (Sum == 2) {cout << i << " ";}
            else if (Sum%2 != 0)
            {
                if (a[Sum] == false) {cout << i << " ";}
            }
        }
    }
}



int main(){
    freopen("PASSWORD.INP","r",stdin);
    freopen("PASSWORD.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long L, R;
    cin >> L >> R;

    sol(L,R);


    return 0;
}
