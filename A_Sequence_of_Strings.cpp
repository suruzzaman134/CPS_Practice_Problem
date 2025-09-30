#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin >> n;
   vector<string> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];

   reverse(v.begin(), v.end());

   for(string s: v) cout << s << "\n";
   

   return 0;
}