#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<string> s1(n), t1(m);
    for (int i = 0; i < n; i++) cin >> s1[i];
    for (int i = 0; i < m; i++) cin >> t1[i];

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        string last3 = s1[i].substr(s1[i].size() - 3); 
        for (int j = 0; j < m; j++) {
            if (last3 == t1[j]) {
                cnt++;
                break;
            }
        }
    }

    cout << cnt << "\n";
    return 0;
}
