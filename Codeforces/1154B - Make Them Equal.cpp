#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &el: arr) cin >> el;

    sort(begin(arr), end(arr));
    arr.erase(unique(begin(arr), end(arr)), end(arr));

    if (arr.size() == 1) cout << 0 << endl;

    else if (arr.size() == 2) {
        int diff = abs(arr[0] - arr[1]);
        if (diff % 2 == 0) cout << diff / 2;
        else cout << diff << endl;
    } 

    else if (arr.size() == 3) {
        if (abs(arr[0] - arr[1]) == abs(arr[1] - arr[2])) 
            cout << abs(arr[0] - arr[2]) / 2 << endl;
        else cout << -1 << endl;
    } 
    
    else cout << -1 << endl;
    return 0;
}