#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <string> data;

    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        data.push_back(input);
    }

    int x = 0;

    for (int i = 0; i < data.size(); i++) {
        if ( data.at(i) == "++X" || data.at(i) == "X++" )
            x++;
        else if ( data.at(i) == "--X" || data.at(i) == "X--")
            x--;
    }

    cout << x << endl;
}