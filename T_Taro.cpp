#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   map<int, bool> mp;
   int n, q; cin >> n >> q;
   for (int i = 1; i <= n; i++) {
        mp[i] = false;
   }

   while (q--)
   {
      int x; cin >> x;
      char ch; cin >> ch;
      if(mp[x] || ch == 'F') cout << "No" << "\n";
      else{
         cout << "Yes" << "\n";
         mp[x] = true;
      }
   }
   




   return 0;
}