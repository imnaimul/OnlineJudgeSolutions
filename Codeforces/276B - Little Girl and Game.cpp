#include <bits/stdc++.h>
using namespace std;

int cnt[26];
bool chk(int n) { return  n & 1; }

int main() {
    ios::sync_with_stdio(false);
    
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); ++i)
        cnt[str[i] - 'a']++;

    int k = count_if(cnt, cnt + 26, chk);

    if (k <= 1) cout << "First" << endl;
    else if (k & 1) cout << "First" << endl;
    else cout << "Second" << endl;

    return 0;
}
