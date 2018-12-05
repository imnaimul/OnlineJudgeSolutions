#include <bits/stdc++.h>
using namespace std;

bool check(int, int, int);

int main() {
    int x, a, b;
    cin >> x;

    bool found = false;

    [&] {
        for (int i = 1; i <= x; ++i) {
            for (int j = 1; j <= x; ++j) {
                if ( check(i, j, x) ) {
                    found = true;
                    a = i, b = j;
                    return;
                }
            }
        }
    }();
    
    if (found) cout << a << " " << b << endl;
    else cout << -1 << endl;
    return 0;
}

bool check(int a, int b, int x) {
    if (a % b != 0) return false;
    if (a * b <= x) return false;
    else if ( a / b >= x ) return false;
    return true;
}
