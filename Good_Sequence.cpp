#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin >> n;
   vector<int> v(n);
   map<int, int> mp;

   for(int i = 0; i < n; i++){
      cin >> v[i];
      mp[v[i]]++; 
   }
   int ans = 0;
   for(auto [x, y] : mp){
      if(x != y){
         if(y < x)  ans += y;
         else ans += y - x;
      }
   }

   cout << ans;

   return 0;
}