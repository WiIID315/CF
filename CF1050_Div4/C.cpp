#include <iostream>

#define ll long long

using namespace std;

void solve() {
	int n, m;
    int side = 0, prevTime = 0;
    int score = 0;

    cin >> n >> m;
    int a, b;
    for(int i = 0; i < n; i++) {
        // cout << "time: " << prevTime << " score: " << score << '\n';
        cin >> a >> b;
        // cout << a << " " << b << '\n';
        // cout << ((a - prevTime) % 2 == 0? "True": "False") << '\n';
        if(b == side) {
            score += (a - prevTime) % 2 == 0? a - prevTime: a - prevTime - 1;
        } else {
            side = b;
            score += (a - prevTime) % 2 != 0? a - prevTime: a - prevTime - 1;
        }
        prevTime = a;
    }
    score += m - prevTime;

    cout << score << '\n';
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