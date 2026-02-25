//https://codeforces.com/group/NLfcjc5iua/contest/433147/problem/T

#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    long long Mot = 0, Hai = 0, Ba = 0, Bon = 0;
    for (long long i = 0; i< n; ++i)
    {
        long long k;
        cin >> k;

        if (k == 1) {++Mot;}
        else if (k == 2) {++Hai;}
        else if (k == 3) {++Ba;}
        else {++Bon;}
    }

    long long SoPhong = Bon;
    Bon = 0;
    if (Mot > Ba) {SoPhong += Ba; Mot -= Ba; Ba = 0;}
    else if (Mot < Ba) {SoPhong += Mot; Ba -= Mot; Mot = 0;}
    else {SoPhong += Mot; Mot = 0; Ba = 0;} // Mot == Ba

    SoPhong += Hai/2 ; Hai -= Hai/2*2;

    if (Hai == 1)
    {
        if (Mot >= 2) {++SoPhong; Hai = 0; Mot -= 2;}
        else {++SoPhong; Hai = 0; Mot = 0;}
    }

    if (Mot != 0)
    {
        if (Mot > 4) {SoPhong += Mot/4; Mot %= 4;}
        if (Mot <= 4 && Mot != 0) {++SoPhong; Mot = 0;}

    }

    SoPhong += Ba;
    SoPhong += Hai;

    cout << SoPhong;

    return 0;
}

