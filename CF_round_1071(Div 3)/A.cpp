#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

void solve() {
	int k, x; cin >> k >> x;
	cout << 1ll * k * x + 1 << '\n';
}

int main() {
	cin.tie(0) -> sync_with_stdio(false);
	int t; cin >> t;
	while(t-- > 0) solve();
	return 0;
}