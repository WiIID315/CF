// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

using ll = long long;
using namespace std;

ll dist(int a, int b, int c, int d) {
    return 1ll * (c - a) * (c - a) + 1ll * (b - d) * (b - d);
}

void solve() {
    int n; cin >> n;
    vector<array<int, 2>> circles;
    for(int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        circles.push_back({x, y});
    }

    int xs, ys, xt, yt; cin >> xs >> ys >> xt >> yt;
    ll travel_dist = dist(xs, ys, xt, yt);
    bool valid = true;
    for (auto&[x, y] : circles) {
        if(dist(x, y, xt, yt) <= travel_dist) {
            valid = false;
            break;
        }
    }
    cout << (valid ? "YES" : "NO") << '\n';
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while(t-- > 0) solve();

    return 0;
}
