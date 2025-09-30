#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   string s; getline(cin, s);
   map<char, bool> mp;
   for(char i = 'a'; i <= 'z'; i++) mp[i] = false;
   mp[' '] = false;

   int n = s.size();

   transform(s.begin(), s.end(), s.begin(), ::tolower);
   for(int i = 0; i < n; i++){
      mp[s[i]] = true;
   }
   bool flag = true;
   for(auto [x, y]: mp){
      if(!y){ flag = false;
      break;}
   }

   if(flag) cout << "pangram" << "\n";
   else cout << "not pangram" << "\n";
   

   return 0;
}