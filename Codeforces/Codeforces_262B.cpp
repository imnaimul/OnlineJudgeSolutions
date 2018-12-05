#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

inline void make_positive(int *, int);
inline ll sum_array(int *, int);

int main(void) {
    ios::sync_with_stdio(false);
    int n, k;
    cin >> n >> k;
    int arr[n], negetive_count = 0;

    // input list
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] < 0) 
            negetive_count++;
    }

    int extra, min_pos = 0;
    // if k is less that negetive numbers, make the first k numbers positive
    if (k <= negetive_count)
        make_positive( arr, k );

    // else make the first k number negetive, find the minumum value
    else {
        extra = k - negetive_count;
        make_positive( arr, negetive_count );
        if ( negetive_count > 0 )
            min_pos = ( arr[negetive_count - 1] < arr[negetive_count] ) ? negetive_count - 1: negetive_count;

        // if the left signs is odd, make the first one negetive
        arr[min_pos] *= (extra % 2 == 1) ? -1 : 1;
    }

    // output sum
    cout << sum_array(arr, n) << endl;
    return 0;
}

inline void make_positive(int *arr, int length) {
    for (int i = 0; i < length; ++i)
        arr[i] *= -1;
}

inline ll sum_array(int *arr, int length) {
    ll sum = 0;
    for(int i = 0; i < length; ++i)
        sum += arr[i];
    return sum;
}
