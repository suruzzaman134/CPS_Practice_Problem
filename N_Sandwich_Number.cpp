#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   string s; cin >> s;
   int n = s.size();

   if(n == 8 && s[0] >= 'A' && s[0] <= 'Z' && s[7] >= 'A' && s[7] <= 'Z'){
      int num = 0;
      for(int i = 1; i < 7; i++){
         num = num * 10 + (s[i] - '0');
      }
      if(num <= 999999 && num >= 100000) cout << "Yes";
      else cout << "No";
   }else cout << "No";
   

   return 0;
}