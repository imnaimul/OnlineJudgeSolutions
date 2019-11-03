#include <bits/stdc++.h>
using ll = long long;
using namespace std;

unordered_map<char, string> mp {
    {'2', "2"},
    {'3', "3"},
    {'4', "322"},
    {'5', "5"},
    {'6', "53"},
    {'7', "7"},
    {'8', "7222"},
    {'9', "7332"}
};

int main() {
    int n;
    string str;
    cin >> n >> str;

    vector<int> res;
    for (auto el: str)
        for (auto x: mp[el]) res.push_back(x - '0');

    sort(rbegin(res), rend(res));
    for (auto el: res) cout << el;
    cout << endl;
    return 0;
}
