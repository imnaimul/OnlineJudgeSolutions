#include <bits/stdc++.h>
using namespace std;

int main() {
    int usb_count, file_size;
    cin >> usb_count >> file_size;

    int usb_sizes[usb_count];
    for (int i = 0; i < usb_count; ++i)
        cin >> usb_sizes[i];

    sort(usb_sizes, usb_sizes + usb_count, [](int a, int b) {
        return a > b;
    });

    int sum = 0, i = 0;
    while( sum < file_size ) {
        sum += usb_sizes[i];
        i++;
    }

    if (sum - usb_sizes[i - 1] > sum) i--;

    cout << i << endl;
    return 0;
}
