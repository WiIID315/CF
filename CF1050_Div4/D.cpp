#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

#define ll long long

using namespace std;

void solve() {
	int n;
    cin >> n;
    ll score = 0;
    vector<int> a;
    int temp;
    int left = 0;
    int right = -1;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        if(temp % 2 == 0) 
            score += temp;
        else {
            a.push_back(temp);
            ++right;
        }
    }
    sort(a.begin(), a.end(), greater<int>());
    if(!a.size()) {
        cout << 0 << '\n';
        return;
    }
    while(left < a.size() && left <= right) {
        score += a[left++];
        --right;
    }
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