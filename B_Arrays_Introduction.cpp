#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];

   reverse(v.begin(), v.end());

   for(int element : v) cout << element << " ";

   return 0;
}