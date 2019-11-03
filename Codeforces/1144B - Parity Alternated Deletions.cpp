#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int od = 0, ev = 0;
    vector<int> odd, even;
    for (int i = 0; i < n; ++i) {
        int p; cin >> p;
        if (p & 1) odd.push_back(p), od++;
        else even.push_back(p), ev++;
    }

    sort(begin(odd), end(odd), greater<int>());
    sort(begin(even), end(even), greater<int>());

    if (ev == od || od == ev - 1 || ev == od - 1) cout << 0 << endl;
    else if ( ev == 0 ) cout << accumulate(odd.begin() + 1, odd.end(), 0LL) << endl;
    else if ( od == 0 ) cout << accumulate(even.begin() + 1, even.end(), 0LL) << endl;
    else if ( ev > od ) cout << accumulate(even.begin() + (od + 1), even.end(), 0LL) << endl;
    else if ( od > ev ) cout << accumulate(odd.begin() + (ev + 1), odd.end(), 0LL) << endl;
    return 0;
}
