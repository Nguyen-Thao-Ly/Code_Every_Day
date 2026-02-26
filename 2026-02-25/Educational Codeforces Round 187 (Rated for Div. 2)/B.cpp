/*

F(x) là tổng các chữ số của x.
X sẽ là số đẹp nếu Tổng các số của Tổng các số của X = tổng các số của x
nghĩa là sau khi tính tổng 2 lần thì nó giống với lần đầu.

tổng của 37 là 10, tổng lần 2 là 1
nếu đổi thành 33 : tổng lần 1 là 6, tổng lần 2 là 6 => thành công
645 có tổng lần 1 là 15, tổng lần 2 là 6. Sau khi đổi thành 140 thì tổng lần 1 là 5, tổng lần 2 cũng là 5.

Vậy suy ra cách giải quyết là biến tất cả tụi nó thành số có tổng là 1 chữ số và in ra số lần phải biến đổi

*/


#include <bits/stdc++.h>
using namespace std;

void sol(string st){

    long long Bang[10] = {0,0,0,0,0,0,0,0,0,0};

    //cout << st << endl;

    long long d = st.size();

    long long Sum = 0;
    for (long long i = 0; i < d; ++i)
    {
        ++Bang[st[i] - '0'];
        Sum += (st[i] - '0');
    }

    //for (long long i = 0; i < 16; ++i) {cout << Bang[i] << " " ;}
    //cout << " " << Sum << endl;

    long long cnt = 0;
    long long SLL = 0;

    long long Ngoai_Le = st[0] - '0';
    //cout << Ngoai_Le << endl;

    long long i = 9;
    while (Sum > 9 && i)
    {
        //cout << "Ktra " << i <<  " " << Bang[i] << endl;

        //if (Bang[i] == 1) {cout << "Bang 1 ne" << endl;}
        //if (i == Ngoai_Le) {cout << "Vi Pham ne " << endl;}
        if (Bang[i] == 1 && i == Ngoai_Le) //xu li so dau tien != 0
        {
            //cout << "runBang1" << endl;
           Bang[1] = 1;
           --Bang[i];
           Sum -= i;
           ++Sum;
           ++cnt;
           //cout << "SSum" << Sum << endl;

        }
        else if (Bang[i]  != 0)
        {
            //cout << "runBang2" << endl;

           --Bang[i];
           Sum -= i;
           ++cnt;
        }
        else {--i;}
    }


    //cout << "Ket qua = " << cnt;
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

