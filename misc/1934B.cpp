// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>

using ll = long long;
using namespace std;

int coins[5] = {1, 3, 6, 15};

int calc(int n) {
    if(n < 0)
        return 1000000001;
    int sum = 0;
    for(int i = 3; i >= 0; i--) {
        sum += n / coins[i];
        n %= coins[i];
    }
    return sum;
}

void solve() {
    int n; cin >> n;
    vector<int> sums;
    for(int i = 0; i < 3; i++) {
        sums.push_back(i + calc(n - i * 10));
    }
    cout << min(sums[2], min(sums[0], sums[1])) << '\n';
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int t; cin >> t;
    while(t-- > 0) solve();

    return 0;
}
