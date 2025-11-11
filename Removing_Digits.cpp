// Problem Link : https://cses.fi/problemset/task/1637/
#include <bits/stdc++.h>
using namespace std;

void i_v(int n, vector<int> &v){
  for(int i = 0; i < n; i++) cin >> v[i];
}
int dp[1000005];
int need_sub(int n){
   if(n == 0) return 0;
   if(dp[n] != -1) return dp[n];
   int temp = n;
   int result = INT_MAX;
   while (temp > 0)
   {
      int digit = temp % 10;
      if(digit != 0) result = min(result, 1 + need_sub(n - digit));
      temp /= 10;
   }
   return dp[n] = result;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   memset(dp, -1, sizeof(dp));
   int n; cin >> n;
   cout << need_sub(n);

   return 0;
}