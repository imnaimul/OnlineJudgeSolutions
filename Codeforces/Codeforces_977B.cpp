#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    string s;
    cin >> n >> s;

    unordered_map<string, int> count;
    for (int i = 0; i < n - 1; ++i)
        count[s.substr(i, 2)]++;

    int max = 0; string max_key;
    for (auto it = count.begin(); it != count.end(); ++it) {
        if (it->second > max) {
            max_key = it->first;
            max = it->second;
        }
    }

    cout << max_key << endl;
    return 0;
}
