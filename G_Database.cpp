#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   int test = 1;
   while (t--)
   {
      int n, m; cin >> n >> m;
      bool flag = true;
      map<int, map<int, bool>> mp;
      while (m--)
      {
         int id, sub; cin >> id >> sub;
         if(mp[id].count(sub)){
            flag = false;
            break;
         }else{
            mp[id][sub] = true;
         }
      }

      if(flag) cout << "Scenario #" << test << ": possible" << "\n";
      else  cout << "Scenario #" << test << ": impossible" << "\n";
      test++;
      
   }
   

   return 0;
}