#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin >> n;
   pair<string, int> pr = {" ", INT_MIN};
   map<string, int> mp;
   while (n != 0)
   {
      n--;
      string c; cin >> c;
      mp[c]++;
      if(mp[c] > pr.second){
         pr = {c, mp[c]};
      }
      if(n == 0){
         cout << pr.first << "\n";
         mp.clear();
         pr = {" ", INT_MIN};
         cin >> n;
      }
   }
   

   return 0;
}