// Problem Link : https://atcoder.jp/contests/dp/tasks/dp_a/
#include <bits/stdc++.h>
using namespace std;

void i_v(int n, vector<int> &v){
  for(int i = 0; i < n; i++) cin >> v[i];
}
int n;
int h[100005];
int dp[100005];
int solve(int i){
   if(i == n) return 0;
   if(dp[i] != -1) return dp[i];
   int res = INT_MAX;

   int cost = abs(h[i] - h[i+1]);
   res = min(res, cost + solve(i+1));

   if(i+2 <= n){
      int cost = abs(h[i] - h[i+2]);
      res = min(res, cost + solve(i+2));
   }

   return dp[i] = res;

}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   memset(dp, -1, sizeof(dp));
   cin >> n;
   for(int i = 1; i <= n; i++){
      cin >> h[i];
   }
   cout << solve(1);

   return 0;
}