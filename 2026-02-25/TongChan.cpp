//https://codeforces.com/group/NLfcjc5iua/contest/433147/problem/S

#include <bits/stdc++.h>
using namespace std;

long long SoCach(long long n){

    if (n%2 == 0) {return (1+(n-1)) * ((n-1)/2) + n/2;}
    return ((1 + (n-1)) * ((n-1)/2));

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    long long Chan = 0, Le = 0;
    for (long long i = 0; i< n; ++i)
    {
        long long k;
        cin >> k;

        if (k%2 == 0) {++Chan;}
        else {++Le;}
    }

    //số cách chọn 2 trong n = tổng từ 1 đến n-1
    //(1 + 10) * ((n-1)/2) nếu (n-1) là số chẵn. Tương đương n là số lẻ
    //(1+(n-1)) * ((n-1)/2) + n/2 , nếu (n-1) lẻ <=> n chẵn

    //neu so trang sach la chan : res += so cach lay 2 quyen cua chan va le
    //else : res += so cach lay 2 quyen gom 1 chan va 1 le. => res = so cach = chan * le

    long long res = 0;
    if (Le%2 == 0)
    {
        res += SoCach(Chan);
        res += SoCach(Le);
    }
    else
    {
        res += Chan*Le;
    }

    cout << res;

    return 0;
}
