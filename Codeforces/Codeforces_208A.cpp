#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    while(s.find("WUB") != string::npos) {
        size_t pos = s.find("WUB");
        s.erase(pos, 2);
        s.at(pos) = ' ';
    }

    cout << s << endl;
}
