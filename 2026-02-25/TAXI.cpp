//https://oj.vnoi.info/problem/nvnamson_taxi#submit

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

    long long SoXe = Bon;
    Bon = 0;
    if (Mot > Ba) {SoXe += Ba; Mot -= Ba; Ba = 0;}
    else if (Mot < Ba) {SoXe += Mot; Ba -= Mot; Mot = 0;}
    else {SoXe += Mot; Mot = 0; Ba = 0;} // Mot == Ba

    SoXe += Hai/2 ; Hai -= Hai/2*2;

    if (Hai == 1)
    {
        if (Mot >= 2) {++SoXe; Hai = 0; Mot -= 2;}
        else {++SoXe; Hai = 0; Mot = 0;}
    }

    if (Mot != 0)
    {
        if (Mot > 4) {SoXe += Mot/4; Mot %= 4;}
        if (Mot <= 4 && Mot != 0) {++SoXe; Mot = 0;}

    }

    SoXe += Ba;
    SoXe += Hai;

    cout << SoXe;

    return 0;
}


