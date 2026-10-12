#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    string n; cin >> n;
    int good = -1;
    int alt = -1;
    int end_val = n[n.size() - 1] - '0';
    for(int i = 0; i < n.size() - 1; i++) {
        int val = n[i] - '0';
        if (val & 1)
            continue;
        if (end_val > val && good == -1)
            good = i;
        alt = i;
    }
    if(good != -1) {
        swap(n[good], n[n.size() - 1]);
        cout << n << '\n';
    } else if (alt != -1) {
        swap(n[alt], n[n.size() - 1]);
        cout << n << '\n';
    } else {
        cout << -1 << endl;
    }
    return 0;
}
