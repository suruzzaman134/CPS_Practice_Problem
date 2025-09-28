#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin >> n;
   vector<int> v(n);
   int current_max;
   for(int i = 0; i < n; i++){
      cin >> v[i];
      if(i == 0) current_max = v[0];
   }
   int ans = -1;
   for(int i = 0; i < n; i++){
      if(current_max < v[i]){
         ans = i + 1;
         break;
      }
   }

   cout << ans;
   

   return 0;
}