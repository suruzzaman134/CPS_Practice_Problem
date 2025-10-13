#include <bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; 
   cin >> n;
   map<string, int> mp;

   while (n--) {
      string s;
      cin >> s;
      mp[s]++;
   }

   int max_count = 0;
   for (auto &x : mp) {
      max_count = max(max_count, x.second);
   }

   for (auto &x : mp) {
      if (x.second == max_count) {
         cout << x.first << "\n";
      }
   }

   return 0;
}
