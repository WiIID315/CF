#include <iostream>
#include <vector>
#include <string>

using namespace std;
using ll = long long;

void solve() {
	int n, x, y;
	string s;
	cin >> n >> x >> y >> s;
	vector<int> p(n);
	ll sumCheck = 0;
	for(int i = 0; i < n; i++) {
		cin >> p[i];
		sumCheck += p[i];
	}

	if(sumCheck > x + y) {
		cout << "NO" << '\n';
		return;
	}

	int mina = 0;
	int minb = 0;
	//Bruh you just need an "either variable" and edit that 
	int sparea = 0;
	int spareb = 0;
	bool awin, bwin;
	for(int i = 0; i < n; i++) {
		if(s[i] == '0') {
			awin = true;
			mina += (p[i] + 1) / 2;
			minb += (p[i] - 1) / 2;
			if(p[i] % 2 == 0) spareb++;
		} else {
			bwin = true;
			minb += (p[i] + 1) / 2;
			mina += (p[i] - 1) / 2;
			if(p[i] % 2 == 0) sparea++;
		}
	}
	int gap = max(max(0, awin ? 0: x - mina - sparea), max(0, bwin ? 0 : y - minb - spareb));
	cout << "debug: " << mina << ' ' << minb << '\n';
	cout << "gap: " << gap << '\n';
	if(mina + gap > x || minb + gap > y) {
		cout << "NO" << '\n';
		return;
	}
	cout << "YES" << '\n';
}

int main() {
	cin.tie(0) -> sync_with_stdio(false);
	int t; cin >> t;
	while(t-- > 0) solve();
	return 0;
}