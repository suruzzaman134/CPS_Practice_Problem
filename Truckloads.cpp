// Problem Link : https://www.spoj.com/problems/TRUCKL/en/
#include <bits/stdc++.h>
using namespace std;

void i_v(int n, vector<int> &v){
  for(int i = 0; i < n; i++) cin >> v[i];
}

long long divide(long long numCrates, long long loadSize){
   if(numCrates <= loadSize) return 1;
   long long left_need = divide(numCrates / 2, loadSize);
   long long right_need = divide((numCrates + 1) / 2, loadSize);
   return left_need + right_need;
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long long numCrates, loadSize;
   while (cin >> numCrates >> loadSize){
      cout << divide(numCrates, loadSize) << "\n";
   }

   return 0;
}