#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   map<int, int> mp;
   int cnt = 0;
   while (t--)
   {
      int x; cin >> x;
      mp[x]++;
   }

   for(auto [x, y] : mp){
      if(x != y && y > x) cnt += abs(x - y);
      else if(x != y && y < x) cnt += y;
   }

   cout << cnt << "\n";
   

   return 0;
}