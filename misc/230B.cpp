#include <iostream>
#include <vector>
#include <cmath>
#include <set>

using namespace std;
using ll = long long;

int main() {
    //oops wait I forgot fast io
    const int N = 10000001;
    vector<int> lp(N+1);
    vector<int> pr;
    set<int> primes;
    
    for (int i=2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
            primes.insert(i);
        }
        for (int j = 0; i * pr[j] <= N; ++j) {
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i]) {
                break;
            }
        }
    }

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        ll num; cin >> num;
        if ((int)sqrt(num) != sqrt(num)) {
            cout << "NO" << '\n';
            continue;
        }
        if (primes.find((int)sqrt(num)) != primes.end()) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
