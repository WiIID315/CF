#include <iostream>

#define ll long long

using namespace std;

void solve() {
	int x, n;
	cin >> x >> n;
	cout << (n % 2) * x << '\n';
}

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t-- > 0) {
    	solve();
    }

    return 0;
}