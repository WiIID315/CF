#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int k = a[0];
	if(a[1] - k > k) 
		k = a[1] - k;
	cout << k << '\n';
}

int main() {
	cin.tie(0) -> sync_with_stdio(false);
	int t; cin >> t;
	while(t-- > 0) solve();
	return 0;
}