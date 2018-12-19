#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, count = 0;
        cin >> n;
        if (n % 2 == 1) count += 1, n -= 3;
        count += n / 2;
        cout << count << endl;
    }
    
    return 0;
}
