// Problem Link : https://acm.timus.ru/problem.aspx?space=1&num=1005
#include <bits/stdc++.h>
using namespace std;

int n;
int a[20];

int fun(int idx, int left, int right) {
   if(idx == n) return abs(left - right);
   int left_r = fun(idx + 1, left + a[idx], right);
   int right_r = fun(idx+1, left, right + a[idx]);
   return min(left_r, right_r);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << fun(0, 0, 0);
}
