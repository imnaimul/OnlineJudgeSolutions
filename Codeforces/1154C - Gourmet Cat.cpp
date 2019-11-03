#include <bits/stdc++.h>
#define len(str) (int) str.size()
#define what_is(x) cout << #x << " : " << x << endl;
#define ll long long
#define tuple tuple<int, int, int> 
using namespace std;

int a, b, c;

tuple sol( ll n, ll start_day ) {
    vector<string> arr {"Sat", "Sun", "Mon", "Tues", "Wed", "Thu", "Fri"};

    ll a, b, c;
    a = b = c = 0;
    ll weeks = n / 7, left = n % 7;
    a += weeks * 3;
    b += weeks * 2;
    c += weeks * 2;

    // start day == 1 means saturday
    rotate(arr.begin(), arr.begin() + start_day - 1, arr.end()); 
    for (int i = 0; i < left; ++i) {
        if (arr[i] == "Sun" || arr[i] == "Mon" || arr[i] == "Thu") a++;
        else if (arr[i] == "Tues" || arr[i] == "Sat") b++;
        else c++;
    }

    return {a, b, c};
}

bool possible( ll n ) {
    for (int d = 1; d <= 7; ++d) {
        tuple x = sol(n, d);
        if (get<0>(x) <= a && get<1>(x) <= b && get<2>(x) <= c) return true;
    }
    return false;
}

int main() {
    cin >> a >> b >> c;

    ll lo = 0, hi = 3e9, mid, midval, res;
    while(lo <= hi) {
        mid = (lo + hi) / 2;
        if ( possible(mid) ) {
            res = mid;
            lo = mid + 1;
        } else hi = mid - 1;
    }

    cout << res << endl;
    return 0;
}
