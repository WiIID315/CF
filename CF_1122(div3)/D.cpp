#include <iostream>
#include <map>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    map<int, int> counts;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        counts[a - i] = 0;
    }
    int ans = 0;
    for(auto& [k, v] : counts) {
        counts[k] = counts[k - 1] + 1;
        if (counts[k] > ans)
            ans = counts[k];
    }
    cout << ans << '\n';
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t; cin >> t;
    while(t-- > 0)
        solve();

    return 0;
}