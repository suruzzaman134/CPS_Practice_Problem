// Problem Link : https://www.spoj.com/problems/MERGSORT/en/
#include <bits/stdc++.h>
using namespace std;
int n, v[100005], temp[100005];

void conqure(int l, int r){
   int i = l, mid = (l + r) / 2, j = mid + 1, idx = l;
   while (i <= mid && j <= r)
   {
      if(v[i] < v[j]) temp[idx++] = v[i++];
      else temp[idx++] = v[j++];
   }

   while (i <= mid)
   {
      temp[idx++] = v[i++];
   }
   while (j <= r)
   {
      temp[idx++] = v[j++];
   }

   for(int k = l; k <= r; k++) v[k] = temp[k];
   
}

void divide(int l, int r){
   if(l == r) return;
   int mid = (l + r) / 2;
   divide(l, mid);
   divide(mid+1, r);

   conqure(l, r);
}

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   n = 0; int a;
   while (cin >> a)
   {
      v[n++] = a;
   }

   divide(0, n - 1);
   
   for(int i = 0; i < n; i++) cout << v[i] << " ";

   return 0;
}