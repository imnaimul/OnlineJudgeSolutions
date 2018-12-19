#include <iostream>
#include <cstring>
using namespace std;
using ulli = unsigned long long int;

ulli nc2(int n) {
    ulli res = 1, t = n;
    if (n % 2 == 0)  res *= n / 2, res *= (n- 1);
    else  res *= n, res *= (n - 1) / 2;
    return res;
}

int main() {
    ios::sync_with_stdio(false);

    int n, k, input;
    cin >> n >> k;

    int freq[k + 1];
    memset(freq, 0, sizeof freq);

    for (int i = 0; i < n; ++i)
        cin >> input, 
        freq[input]++;

    ulli res = nc2(n);
    for (int i = 1; i <= k; ++i)
        res -= nc2( freq[i] );

    cout << res << endl;
    return 0;
}
