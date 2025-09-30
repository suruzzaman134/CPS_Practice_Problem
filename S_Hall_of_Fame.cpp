#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t; cin >> t;
   while (t--)
   {
      int n; cin >> n;
      string s; cin >> s;

      int idx = 0;
      bool ok = false;
      
      
      for(int i = 0; i < n - 1; i++){
         if(s[i] != s[i+1]){
            idx = i;
            ok = true;
            break;
         }
      }

      if(!ok) cout << -1 << "\n";
      else{
         if(s[idx] == 'R') cout << 0 << "\n";
         else cout << idx + 1 << "\n";
      }
      
   }
   

   return 0;
}