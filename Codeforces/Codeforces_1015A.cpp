#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;

    bool marks[m + 1];
    memset(marks, false, m + 1);

    while(n--) {
        int l, r, i;
        cin >> l >> r, i = l;
        while( i <= r ) marks[i] = true, i++;
    }

    vector<int> result;
    for (int i = 1; i <= m; ++i)
        if ( !marks[i] )
            result.push_back( i );


    cout << result.size() << endl;
    for (int i = 0; i < result.size(); ++i)
        cout << result[i] << " ";
    cout << endl;
    return 0;
}
