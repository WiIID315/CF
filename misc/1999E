#include <iostream>
#include <vector>

using ll = long long;
using namespace std;
vector<ll> prefix(2 * 10e5 + 2);

void build_prefix() {
    int checkpoint = 1;
    int log = 1;
    for(int i = 1; i <= 2000000; i++) {
        if(checkpoint * 3 == i) {
            checkpoint *= 3;
            log++;
        }
        prefix[i] = prefix[i - 1] + log;
    }
}

void solve() {
    int l, r;
    cin >> l >> r;
    ll total = prefix[r] + prefix[l] - 2 * prefix[l - 1];
    cout << total << '\n';
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    build_prefix();
    while(t-- > 0) solve();

    return 0;
}
