#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    map<int,int> freq;
    for(int x : v) freq[x]++;

    int ans = 0;
    for(auto p : freq) ans = max(ans, p.second);

    cout << ans << "\n";

    return 0;
}
