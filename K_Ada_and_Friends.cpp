#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   long long n, k; cin >> n >> k;
   map<string, long long> mp;
   while (n--)
   {
      string s; cin >> s;
      long long g; cin >> g;
      mp[s] += g;
   }

   vector<long long> cost;
   for(auto [x, y]: mp){
      cost.push_back(y);
   }

   long long spr = 0;
   sort(cost.begin(), cost.end());
   for(long long i = cost.size() - 1; k > 0 && i >= 0; i--, k--){
      spr += cost[i];
   }

   cout << spr;
   

   return 0;
}