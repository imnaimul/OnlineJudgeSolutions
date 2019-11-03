#include <bits/stdc++.h>    
using namespace std;
using ulli = unsigned long long int;

int main(void) {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif
    ulli n;
    cin >> n;

    ulli arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr, arr + n);

    for (int i = 0; i < n; ++i) {
        ulli elem = arr[i];
        vector<ulli> list;
        list.push_back(elem);

        while(true) {
            if ( elem % 3 == 0 && binary_search(arr, arr + n, elem / 3) )     
                list.push_back(elem / 3), 
                elem = elem / 3;

            else if ( binary_search(arr, arr + n, elem * 2) )
                list.push_back(elem * 2), 
                elem = elem * 2;

            else break;
        }

        if (list.size() == n) {
            for (auto el: list) cout << el << " ";
            cout << endl;
            break;
        }
    }

    return 0;
}
