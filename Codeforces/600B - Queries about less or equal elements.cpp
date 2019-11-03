#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr.at(i);
    sort( arr.begin(), arr.end() );

    while(m--) {
        int p; cin >> p;
        auto it = upper_bound(arr.begin(), arr.end(), p);
        cout << it - arr.begin() << " ";
    }
    cout << endl;
    return 0;
}
