// Problem Link : https://atcoder.jp/contests/dp/tasks/dp_b/
#include <bits/stdc++.h>
using namespace std;

int h[100005];
int dp[100005];
int n, k;

int solve(int i){
   if(i == n) return 0;
   if(dp[i] != -1) return dp[i];
   int res = INT_MAX;
   for(int j = 1; j <= k; j++){
      if(i+j <= n){
         int cost = abs(h[i] - h[i+j]);
         res = min(res, cost + solve(i+j));
      }
   }
   return dp[i] = res;
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   memset(dp, -1, sizeof(dp));
   cin >> n >> k;
   for(int i = 1; i <= n; i++) cin >> h[i];
   cout << solve(1);
   return 0;
}