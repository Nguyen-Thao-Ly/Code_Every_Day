//https://oj.vnoi.info/problem/nvnamson_sodacbiet2

#include <bits/stdc++.h>
using namespace std;

bool IsPrime(long long n){

    if (n == 2) {return 1;}
    else if (n%2 == 0) {return 0;}

    for (long long i = 3; i*i <= n; ++i)
    {
        if (n%i == 0) {return 0;}
    }

    return 1;

}

int main() {

    long long n;
    cin >> n;

    long long Sum = 0;
    while(n)
    {
        Sum += n%10;
        n /= 10;
    }

    if (IsPrime(Sum)) {cout << 1;}
    else {cout << 0;}



    return 0;
}
