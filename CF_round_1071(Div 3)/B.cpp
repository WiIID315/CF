#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	int sum = 0;
	for(int i =0 ; i< n; i++) {
		cin >> a[i];
		if(i > 0) sum += abs(a[i] - a[i - 1]);
	}

	int diff = -1;
	for(int i = 0; i < n; i++) {
		int newVal = 0;
		if(i != 0) {
			newVal += abs(a[i] - a[i - 1]);
		} else {
			diff = max(diff, abs(a[i] - a[i + 1]));
			continue;
		}
		if(i != n - 1) {
			newVal += abs(a[i + 1] - a[i]);
		} else {
			diff = max(diff, abs(a[i] - a[i - 1]));
			continue;
		}
		newVal -= abs(a[i + 1] - a[i - 1]);
		diff = max(diff, newVal);
	}
	cout << sum - diff << '\n';

}

int main() {
	cin.tie(0) -> sync_with_stdio(false);
	int t; cin >> t;
	while(t-- > 0) solve();
	return 0;
}