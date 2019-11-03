#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int dorms_count, letters;
    cin >> dorms_count >> letters;

    vector<ll> dorms(dorms_count);
    for (int i = 0; i < dorms_count; ++i) cin >> dorms.at(i);

    // prefix sum
    for (int i = 1; i < dorms_count; ++i) 
        dorms.at(i) = dorms.at(i) + dorms.at(i - 1);


    while(letters--) {
        ll single;
        cin >> single;
        auto it = lower_bound(dorms.begin(), dorms.end(), single);
        
        cout << it - dorms.begin() + 1 << " ";
        if ( it - dorms.begin() == 0 )
            cout << single  << endl;
        else 
            cout << single - dorms[ it - dorms.begin()- 1 ] << endl;
    }

    return 0;
}
