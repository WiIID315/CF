#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) 
		cin >> a[i];
	int last_neg = -1;
	int last_one = -1;
	bool bottom = false;
	for(int i = 0; i < n; i++) {
		if(a[i] == 1) {
			bottom = true;
			last_one = i;
		}
		if(a[i] == -1) {
			last_neg = i;
			if(bottom == false) {
				bottom = true;
				a[i] = 1;
			} else {
				a[i] = 0;
			}
		}
	}
	if(last_neg >= 0 && last_one <= last_neg)
		a[last_neg] = 1;
	for(int e: a) {
		cout << e << ' ';
	}
	cout << '\n';
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t-- > 0) solve();
	return 0;
}