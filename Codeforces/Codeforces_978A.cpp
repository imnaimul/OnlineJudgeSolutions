#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    int arr[n];
    vector<int> uniques;
    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    bool marks[1001] {false};
    for(int i = n - 1; i >= 0; --i) {
        if (!marks[arr[i]]) 
            uniques.push_back(arr[i]),
            marks[arr[i]] = true;
    }
    
    cout << uniques.size() << endl;
    for (int i = uniques.size()-1; i >= 0; --i)
        cout << uniques[i] << " ";
    cout << endl;
    return 0;
}
