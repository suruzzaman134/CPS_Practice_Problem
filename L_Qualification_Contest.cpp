#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, k; cin >> n >> k;
   vector<string> v;
   while (n--)
   {
      string s; cin >> s;
      v.push_back(s);
   }

   sort(v.begin(), v.begin() + k);

   for(int i = 0; i < k; i++) cout << v[i] << "\n";
   

   return 0;
}