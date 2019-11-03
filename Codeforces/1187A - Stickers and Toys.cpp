#include <bits/stdc++.h>
using namespace std;


int main() {
    int q;
    cin >> q;

    while(q--) {
        int n, a, b;
        cin >> n >> a >> b;
        cout << max(n - a, n - b) + 1 << endl;
    }

    return 0;
}
