#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, k, l, c;
    cin >> n >> k;

    l = 5 - k, c = 0;
    for (int i = 0; i < n; ++i) {
        int input;
        cin >> input;
        if (input <= l) c++;
    }

    cout << c / 3 << endl;
    return 0;
}
