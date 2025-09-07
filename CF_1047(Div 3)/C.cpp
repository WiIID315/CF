#include <iostream>

#define ll long long

using namespace std;

void solve() {
	ll a, b;
	cin >> a >> b;
	if(a % 2 != 0 && a % 2 == b % 2) {
		cout << a * b + 1 << endl;
	} else {
		if(b % 2 == 0 && a * (b / 2) % 2 == 0) {
			cout << (a * b / 2) + 2 << endl;
		}
		else
			cout << -1 << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while(t-- > 0) solve();
	return 0;
}