// Problem Link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_D
#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, q; cin >> n >> q;

   vector<vector<int>> v(n);

   while (q--)
   {
      int op; cin >> op;
      if(op == 0){
         int t, x; cin >> t >> x;
         v[t].push_back(x);
      }else if(op == 1){
         int t; cin >> t;
         for(int ele : v[t]) cout << ele << " ";
         cout << "\n";
      }else{
         int t; cin >> t;
         v[t].clear();
      }
   }
   

   return 0;
}