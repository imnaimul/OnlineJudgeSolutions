#include<bits/stdc++.h>
using namespace std;

int cnt[200100];

int main() {
    ios::sync_with_stdio(false);
    int n, mx = 0;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el, cnt[el]++, mx = max(mx, el);

    for (int i = 0; i <= mx; ++i) 
        if ( cnt[i] > 2 ) { cout << "NO" << endl; return 0; } 

    vector<int> res1, res2;
    for (int i = 0; i <= mx; ++i) {
        if ( cnt[i] == 2 ) res1.push_back(i), res2.push_back(i), cnt[i];
        else if ( cnt[i] == 1 ) res2.push_back(i);
    }

    cout << "YES" << endl;
    cout << res1.size() << endl;
    for (auto el: res1) cout << el << ' ';
    cout << endl;

    cout << res2.size() << endl;
    for (int i = res2.size() - 1; i >= 0; --i) cout << res2[i] << ' ';
    cout << endl;

    return 0;
}