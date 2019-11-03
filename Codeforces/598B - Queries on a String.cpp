#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;
    int q;
    cin >> q;
    while(q--) {
        int l, r, k;
        cin >> l >> r >> k;

        string temp = s.substr(l - 1, r - l + 1);
        string res = temp;

        for (int i = 0; i < (int) temp.length(); ++i)
            res[ (i + k) % (int) temp.length() ] = temp[i];
        
        l--, r--;
        int j = 0;
        for ( int i = l; i <= r; ++i ) {
            s[i] = res[j];
            ++j;
        }
    }

    cout << s << endl;
    return 0;
}
