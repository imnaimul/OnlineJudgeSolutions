#include <bits/stdc++.h>
using ll = long long;
using namespace std;

ll n, sz, tcomp, tsz;
pair<int, int> arr[100100];

int main() {
    cin >> n >> sz;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i].first >> arr[i].second;
        tcomp += arr[i].second;
        tsz += arr[i].first;
    }

    if ( tcomp > sz ) cout << "-1" << endl;
    else if (tsz <= sz) cout << "0" << endl;
    else {
        sort( arr + 1, arr + n + 1, [](pair<int, int> a, pair<int, int> b) {
            return a.first - a.second > b.first - b.second;
        });

        ll cnt = 0;
        for (int i = 1; i <= n; ++i) {
            tsz -= (arr[i].first - arr[i].second);
            cnt ++;
            if ( tsz <= sz ) break;
        }
        cout << cnt << endl;
    }

    return 0;
}
