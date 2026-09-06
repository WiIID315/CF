#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<int> a(n);
	int zeroes = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		if(a[i] == 0)
			zeroes++;
	}
	//case 1: No zeroes - trivial
	//case 2: Zeroes: Need 2+, Assign zeroes to A and B, rest to C
	//case 3: one zero - I think it's joever?
	if(zeroes == 1) {
		cout << "NO" << '\n';
	} else if (zeroes == 0) {
		cout << "YES" << '\n';
		for(int i = 0; i < n; i++) {
			cout << 'A';
		}
		cout << '\n';
	} else {
		cout << "YES" << '\n';
		int z_count = 0;
		for(int i = 0; i < n; i++) {
			if(a[i] == 0) {
				cout << (char)('A' + z_count % 2);
				z_count++;
			} else {
				cout << 'C';
			}
		}
		cout << '\n';
	}

}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t-- > 0) solve();
	return 0;
}