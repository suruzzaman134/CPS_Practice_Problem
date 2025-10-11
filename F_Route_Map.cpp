#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m; cin >> n >> m;
   vector<string> s(n);
   map<string, bool> mp;
   for(int i = 0; i < n; i++){
      cin >> s[i];
   }
   for(int i = 0; i < m; i++){
      string s; cin >> s;
      mp[s] = true;
   }

   for(string ele: s){
      if(mp.count(ele)) cout << "Yes" << "\n";
      else cout << "No" << "\n";
   }
   

   return 0;
}