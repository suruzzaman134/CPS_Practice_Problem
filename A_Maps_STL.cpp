#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   map<string, int> mp;
   while (t--)
   {
      int op; cin >> op;
      if(op == 1){
         string name; int marks;
         cin >> name >> marks;
         mp[name] += marks;
      }else if(op == 2){
         string name; cin >> name;
         mp[name] = 0;
      }else{
         string name; cin >> name;
         cout << mp[name] << "\n";
      }
   }
   

   return 0;
}