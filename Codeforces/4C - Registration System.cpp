#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    string user;
    map<string, int> freq;
    for (int i = 0; i < n; ++i) {
        cin >> user;
        if ( !freq.count(user) ) 
            cout << "OK" << endl,
            freq.insert({user, 1});

        else 
            freq[user]++,
            cout << user << freq[user] - 1 << endl;
    }

    return 0;
}
