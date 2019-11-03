#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
using namespace std;

int main() {
    vector<int> x;
    for (int i = 0; i < 4; ++i) {
        int p;
        cin >> p;
        x.push_back(p);
    }

    sort(begin(x), end(x));
    do {
        if (x[3] - x[2] > 0 && x[3] - x[1] > 0 && x[3] - x[0] > 0) {
            cout << x[3] - x[2] << ' '  << x[3] - x[1] << ' ' << x[3] - x[0] << endl;
            return 0;
        }
    } while(next_permutation(begin(x), end(x)));
    return 0;
}
