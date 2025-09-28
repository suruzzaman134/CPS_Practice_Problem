#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   vector<vector<int>> v(6, vector<int>(6));

   for(int i = 0; i < 6; i++){
      for(int j = 0; j < 6; j++) cin >> v[i][j];
   }
   int ans = -9 * 7;
   for(int i = 1; i < 5; i++){
      for(int j = 1; j < 5; j++){
         int temp = v[i-1][j-1] + v[i - 1][j] + v[i - 1][j + 1] + v[i][j] + v[i+1][j-1] + v[i + 1][j] + v[i + 1][j + 1];
         ans = max(ans, temp);
      }
   }

   cout << ans ;

   return 0;
}