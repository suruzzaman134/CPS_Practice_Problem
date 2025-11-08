// Problem Link : https://cses.fi/problemset/task/1633
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
void i_v(int n, vector<int> &v){
  for(int i = 0; i < n; i++) cin >> v[i];
}
int dp[1000001];
int solve(int n){
   if(n == 0) return 1;
   int ans = 0;
   if(dp[n] != -1) return dp[n];
   for(int i =  1; i <= 6; i++){
      if(n >= i) ans += solve(n-i);
      ans %= mod;
   }
   return dp[n] = ans;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   memset(dp, -1, sizeof(dp));
   int n; cin >> n;
   cout << solve(n);

   return 0;
}