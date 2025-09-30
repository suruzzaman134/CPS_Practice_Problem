#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int x, y; cin >> x >> y;
      string s; cin >> s;
      map<char, int> mp;

      for(char ch: s) mp[ch]++;
      bool r_l = false, u_d = false;
      if(x >= 0){
         if(mp['R'] >= x) r_l = true;
      }else{
         if(mp['L'] >= abs(x)) r_l = true;
      }

      if(y >= 0){
         if(mp['U'] >= y) u_d = true;
      }else{
         if(mp['D'] >= abs(y)) u_d = true;
      }

      if(r_l && u_d) cout << "YES" << "\n";
      else cout << "NO" << "\n";
   }
   

   return 0;
}