#include <iostream>
using namespace std;
using ulli = unsigned long long int;

int main() {
    ios::sync_with_stdio(false);

    ulli l, r;
    cin >> l >> r;
    bool found = false;

    if ( l - r >= 2 ) {
        for (ulli i = l; i <= r - 2; ++i) {
            if ( i % 2 == 0 ) {
                found = true;
                cout << i << " " << i + 1 << " " << i + 2 << endl;
                break;
            }
        }
        if (!found)  cout << -1 << endl;
    }

    else cout << -1 << endl;
    return 0;
}
