#include <bits/stdc++.h>
using namespace std;

int divs[1001000];
void div_count(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 2 * i; j <= n; j += i) {
            divs[j]++;
        }
        divs[i]++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    div_count(1e6);
    int a, b, c;
    cin >> a >> b >> c;

    int res = 0;
    const int m = 1073741824;

    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                res = ((res % m) + (divs[i * j * k] % m)) % m;
            }
        }
    }

    cout << res << endl;
    return 0;   
}
