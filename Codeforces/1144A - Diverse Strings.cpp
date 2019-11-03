#include<bits/stdc++.h>
using namespace std;

bool is_diverse(string str) {
    int l = str.length();
    sort(str.begin(), str.end());
    for (int i = 0; i < l - 1; ++i)
        if (str[i + 1] - str[i] != 1) 
            return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--) {
        string word;
        cin >> word;

        if ( is_diverse(word) ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
