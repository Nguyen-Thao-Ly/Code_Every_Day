//Tong ki tu cua cac so ngto tu A -> B

#include <bits/stdc++.h>
using namespace std;
const long MAXX = 1e5;
bool PrimeList[MAXX + 5];


void SangNgto(long long n){

    PrimeList[0] = true;
    PrimeList[1] = true;

    for (long long i = 3; i <= n; i += 2)
    {
        if (PrimeList[i] == false)
        {
            for (long long j = i*i; j <= n; j += i) {PrimeList[j] = true;}
        }
    }
}

long long TongN(long long n){
    long long S = 0;

    while (n > 0)
    {
        S += n%10;
        n /= 10;
    }

    return S;
}


long long TinhTongAB(long long a, long long b){

    long long S = 0;

    if (a <= 2) {S += 2;}
    if (a%2 == 0) {++a;}

    for (long long i = a; i <= b; i += 2)
    {
        if (PrimeList[i] == false) //{S += i;}
            {
                //cout << i << " ";
                S += TongN(i);
            }
    }

    //cout << endl;
    return S;
}

int main() {
    freopen("NGUYENTO.INP", "r", stdin);
    freopen("NGUYENTO.OUT", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, b;
    cin >> a >> b;

    SangNgto(b);

    long long kq = TinhTongAB(a, b);
    cout << kq;



    return 0;
}
