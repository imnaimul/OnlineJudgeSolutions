#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll sum(ll n) { return (n * (n + 1)) / 2; }

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    unordered_map<char, int> freq;
    while(n--) {
        string str;
        cin >> str;
        freq[str[0]]++;
    }

    ll res = 0;
    for (auto el: freq) {
        if (el.second == 1) continue;
        int one = el.second / 2 + el.second % 2, other = freq[el.first] - one;
        res += sum(one - 1);
        res += sum(other - 1);
    }

    cout << res << endl;
    return 0;
}
