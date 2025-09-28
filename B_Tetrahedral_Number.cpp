// Problem Link : https://atcoder.jp/contests/abc335/tasks/abc335_b?lang=en
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin >> n;

   vector<vector<int>> ans;

   for(int i = 0; i <= n; i++){
      for(int j = 0; j <= n; j++){
         for(int k = 0; k <= n; k++){
            if(i + j + k <= n) ans.push_back({i, j, k});
         }
      }
   }

   for(auto v : ans){
      for(int ch : v) cout << ch << " ";
      cout << "\n";
   }

   return 0;
}