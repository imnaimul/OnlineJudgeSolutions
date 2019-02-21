#include <bits/stdc++.h>
using namespace std;
struct info {int val, pos;};

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;

    set<string> strs;
    for (int i = 0; i < s.length(); ++i) {
        string temp = "";
        temp += s.substr(i, s.length());
        temp += s.substr(0, i);
        strs.insert(temp);
    }

    cout << strs.size() << endl;
    return 0;
}
