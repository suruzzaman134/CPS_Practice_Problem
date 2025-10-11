#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   string s; cin >> s;
   map<char, int> mp;
   for(char ch : s) mp[ch]++;
   bool flag = true;
   for(auto [x, y] : mp){
      if(y < 2) flag = false;
      break;
   }

   if(flag && mp.size() == 2) cout << "Yes" << "\n";
   else cout << "No" << "\n"; 

   return 0;
}