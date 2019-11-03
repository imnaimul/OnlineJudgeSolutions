#include <bits/stdc++.h>
using namespace std;

bool taken[200200];
int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        int p; cin >> p;
        if (p <= 200000) taken[p] = 1;
    }

    vector<int> res;
    for (int i = 1; i <= 2e5; ++i) {
        if (!taken[i] && k - i >= 0) {
            res.push_back(i);
            k -= i;
        }
    }

    cout << res.size() << endl;
    for (auto el: res) cout << el << ' ';
    cout << endl;
    return 0;   
}
