#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

using ll = long long;
using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> lp(n+1);
	vector<int> pr;
	vector<ll> memo(n + 1, 1000000000);
	
	for (int i=2; i <= n; ++i) {
	    if (lp[i] == 0) {
	        lp[i] = i;
	        pr.push_back(i);
	        memo[i] = 1;
	    }
	    for (int j = 0; i * pr[j] <= n; ++j) {
	        lp[i * pr[j]] = pr[j];
	        if (pr[j] == lp[i]) {
	            break;
	        }
	    }
	}

	for(int i = 1; i <= n; i++) {
		if(i <= k)
			memo[i] = 0;
		for(int prime: pr) {
			if (i * prime > n)
				break;
			memo[i * prime] = min(memo[i * prime], 1 + prime * memo[i]);
		}
	}

	ll sum = 0;
	for(int i = 0; i < n; i++) {
		int temp; cin >> temp;
		sum += memo[temp];
	}
	cout << sum << '\n';
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int t; cin >> t;
	while(t-- > 0)
		solve();
	return 0;
}