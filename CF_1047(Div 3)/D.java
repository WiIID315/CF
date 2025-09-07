#include <iostream>
#include <unordered_map>

#define ll long long

using namespace std;

void solve() {
	int n;
	cin >> n;
	unordered_map<int, int> map;
	int val;
	for(int i = 0; i < n; i++) {
		cin >> val;
		++map[val];
	}
}

int main() {
	int t;
	cin >> t;
	while(t-- > 0) solve();
	return 0;
}