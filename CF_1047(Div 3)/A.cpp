#include <iostream>

#define ll long long

using namespace std;

void solve() {
	ll k, x;
	cin >> k >> x;
	while(k-- > 0) x <<= 1;
	cout << x << endl;
}

int main() {
	int t;
	cin >> t;
	while(t-- > 0) solve();
	return 0;
}