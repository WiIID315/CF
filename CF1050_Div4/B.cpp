#include <iostream>

#define ll long long

using namespace std;

void solve() {
	int n, m, x, y;
    cin >> n >> m >> x >> y;
    int temp;
    for(int i = 0; i < n + m; i++)  cin >> temp;
    cout << n + m << '\n';
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