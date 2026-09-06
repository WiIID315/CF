#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;


void solve() {
	int n; cin >> n;
	vector<int> a(n);
	vector<int> potential(n);
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] > 0) {
			if(i - a[i] >= 0) potential[i - a[i]]++;
			if(i + a[i] < n) potential[i + a[i]]++;
		} else if(!a[i])
			potential[i]++;
	}
	for(int e: potential)
		cout << e << ' ';
	cout << '\n';
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t-- > 0) solve();
	return 0;
}