#include <iostream>
#include<string>

using namespace std;
using ll = long long;

void solve() {
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int zero = 0;
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(s[i] == '0') zero = 1;
		if((i + 1) % k == 0) {
			count += 1 - zero;
			zero = 0;
		}
	}
	cout << count << '\n';
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t-- > 0) solve();
	return 0;
}