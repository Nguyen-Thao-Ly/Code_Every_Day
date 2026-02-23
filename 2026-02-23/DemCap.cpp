/*
https://codeforces.com/group/NLfcjc5iua/contest/433147/problem/I


Cho dãy a gồm n phần tử và số k, hãy đếm số cặp (l,r) (l<r) sao cho al + ar = k.

Input
Dòng đầu gồm số n và k (1 <= n <= 10*5, |-10*5| <= k <= 10*5)
Dòng tiếp theo gồm n số, số thứ i là giá trị của phần tử ai (|-10*5| <= a[i] <= 10*5)

Output
Gồm một dòng duy nhất là đáp án cần tìm

Example
Input
5 4
1 1 3 2 2
Output
3

*/


#include <bits/stdc++.h>
using namespace std;

map <long long, long long> a;

int main(){
    long long n, k;
    cin >> n >> k;

    long long res = 0;
    for (long long i = 0; i < n; ++i)
    {
        //a + b = k
        long long b;
        cin >> b;

        res += a[b];
        ++a[k-b];

    }

    cout << res;

    return 0;
}
