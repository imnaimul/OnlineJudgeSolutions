
 #include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, input;
    cin >> n;

    int data[n];
    for (int i = 0; i < n; ++i)
        cin >> data[i];

    sort(data, data + n);
    if (n % 2 == 0) 
        cout << data[(n / 2) - 1] << endl;
    else 
        cout << data[n / 2] << endl;
    return 0;
}
