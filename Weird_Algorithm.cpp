// Problem Link : https://cses.fi/problemset/task/1068
#include <bits/stdc++.h>
using namespace std;

void i_v(int n, vector<int> &v){
  for(int i = 0; i < n; i++) cin >> v[i];
}

void print_series(long long n){
   if(n == 1){
      cout << n << " ";
      return;
   }
   cout << n << " ";
   if(n % 2) print_series(n * 3 + 1);
   else print_series(n/2);
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   long long n; cin >> n;
   print_series(n);
   


   return 0;
}