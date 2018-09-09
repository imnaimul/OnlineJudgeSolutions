#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, total = 0;
    cin >> n;

    while(n--) {
        string task;
        cin >> task;

        if (task == "donate") {
            int toAdd;
            cin >> toAdd;
            total += toAdd;
        } else if (task == "report") {
            cout << total << endl;
        }
    }

    return 0;
}