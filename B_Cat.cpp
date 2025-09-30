#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin >> n;
   string s; cin >> s;
   for (int i = 0; i < n - 1; i++)
   {
      if(s[i] == 'n' && s[i+1] == 'a'){ s.replace(i, 2, "nya");
      n++;}
   }

   cout << s;
   

   return 0;
}