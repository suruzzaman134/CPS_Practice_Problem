#include <bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin >> n;
   vector<int> a(n), b(n);

   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++) cin >> b[i];

   long long ans = 0;

   int a_max = *max_element(a.begin(), a.end());
   int b_max = *max_element(b.begin(), b.end());

   cout << a_max + b_max << "\n";


   return 0;
}