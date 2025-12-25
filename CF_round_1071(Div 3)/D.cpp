#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	int val = (1 << n) - 1;
	vector<vector<int>> buckets(n + 1);
	for(int i = 0; i <= val; i++) {
		int rightCount = 0;
		int temp = i;
		while(temp > 0) {
			if(temp & 1) rightCount++;
			else break;
			temp >>= 1;
		}
		buckets[rightCount].push_back(i);
	}
	for(int i = n; i >= 0; i--) {
		for(int e: buckets[i]) {
			cout << e << ' ';
		}
	}
	cout << '\n';
}

int main() {
	cin.tie(0) -> sync_with_stdio(false);
	int t; cin >> t;
	while(t-- > 0) solve();
	return 0;
}