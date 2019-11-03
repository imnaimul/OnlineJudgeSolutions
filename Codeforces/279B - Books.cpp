#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    int i = 0, sum = 0, j = 0, mx = 0;
    while( i < n ) {
        sum += arr[i];
        while ( sum > k ) {
            sum -= arr[j];
            j++;
        }
        mx = max(i - j + 1, mx);
        ++i;
    }

    cout << mx << endl;
    return 0;
}
