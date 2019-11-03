#include <bits/stdc++.h>
using namespace std;


int mem[5000];
vector<int> coins(3);

int sol(int n) {
    if (n == 0) return 0;
    if (n < 0) return -999999999;
    if (mem[n] != -1) return mem[n];

    return mem[n] = max({
        sol(n - coins[0]) + 1, 
        sol(n - coins[1]) + 1, 
        sol(n - coins[2]) + 1
    });
}

int main() {
    int n;
    cin >> n;
    for (auto &el: coins) cin >> el;
    for (auto &el: mem) el = -1;
    sort(begin(coins), end(coins));
    cout << sol(n) << endl;
    return 0;
}
