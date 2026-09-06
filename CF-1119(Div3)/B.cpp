#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

void solve() {
	int odds = 0, even_two = 0, odd_two = 0;
	int n; cin >> n;
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		if(a % 4 == 0) even_two++;
		else if(a % 2 == 0) odd_two++;
		else odds++;
	}
	cout << max(odds, max(even_two, odd_two)) << '\n';
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t-- > 0) solve();
	return 0;
}