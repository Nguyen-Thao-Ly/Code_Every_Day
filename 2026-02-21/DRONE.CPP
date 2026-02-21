#include <bits/stdc++.h>
using namespace std;

const long MAXX = 1e6;
long long a[MAXX + 5];
bool b[MAXX + 5];


long long sol1(long long N, long long M, long long K, long long Cannot){

    if (Cannot >= M) {return -1;}

    bool flag = true;

    ++K;
    while (flag == true && K > 0)
    {
        --K;
        //cout << "K = " << K << endl;
        long long Used = 1;
        long long Store = K;
        for (long long i = 0; i < N; ++i)
        {
            //cout << "Drone " << Used  << " , Home" << i + 1 <<  " , Store " << Store << endl;

            if (b[i] == 0)
            {
                ++Used;
                Store = K;
            }

            Store -= a[i];

            if (Store < 0)
            {
                --i;
                ++Used;
                Store = K;
            }

            if (Used > M)
                {
                    flag = false;
                    break;
                }
        }

        //cout << endl << endl;
    }





    return ++K;
}

int main() {
    freopen("DRONE.INP", "r", stdin);
    freopen("DRONE.OUT", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N, M;
    cin >> N >> M;

    long long K = 0;
    for (long long i = 0; i < N; ++i)
    {
        cin >> a[i];
        K += a[i]; //Gan gia tri K lon nhat.
    }

    long long Cannot = 0;
    for (long long i = 0; i < N; ++i)
    {
        cin >> b[i];
        if (b[i] == 0) {++Cannot;}
    }


    long long kq = sol1(N,M,K,Cannot);
    cout << kq;


    return 0;
}

