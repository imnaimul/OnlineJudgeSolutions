#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main() {
    string str;
    cin >> str;
    
    int len = str.size(), mx = 0;
    for ( auto el: str ) mx = max(mx, el - '0');

    int mat[mx][len];
    memset(mat, 0, sizeof(mat));

    for (int i = 0; i < len; ++i) {
        int dig = str[i] - '0';
        for (int j = 0; j < dig; ++j) mat[j][i] = 1;
    }

    cout << mx << endl;
    for (int i = 0; i < mx; ++i) {
        bool flag = false;
        for (int j = 0; j < len; ++j) {
            if (mat[i][j] == 1) flag = true;
            if (flag) cout << mat[i][j];
        }
        
        cout << ' ';
    }
    return 0;
}
