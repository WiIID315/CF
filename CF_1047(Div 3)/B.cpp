#include <iostream>

#define ll long long

using namespace std;

void solve() {
	int n;
	cin >> n;
	int temp;
	for(int i = 0; i < n; i++) {
		cin >> temp;
		if (temp == n)
			if(n == 2) {
				cout << 1;
			} else {
				cout << n;
			}
		else{
			if(n == 2)
				cout << 2;
			else
				cout << n - temp;
		}
		if(i != n - 1) cout << " ";
	}
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t-- > 0) solve();
	return 0;
}