#include <bits/stdc++.h>    
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n, k;
    cin >> n >> k;
    vector<int> list(n);
    for (int i = 0; i < n; ++i) 
        cin >> list[i];
    
    sort(list.begin(), list.end());
    if (k == 0) {
        if (list[0] == 1) cout << -1 << endl;
        else cout << 1 << endl;
    }
        
    else if ( k < list.size() && list[k] == list[k - 1] ) 
        cout << -1 << endl;
    else 
        cout << list[k - 1] << endl;

    return 0;
}
