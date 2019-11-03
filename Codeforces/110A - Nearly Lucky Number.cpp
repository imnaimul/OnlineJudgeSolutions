#include <iostream>
#include <string>

using namespace std;
bool is_almost_lucky(const string &);

int main() {
    string n;
    cin >> n;

    if (is_almost_lucky(n)) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}


bool is_almost_lucky(const string &n) {
    int lucky_digit_count = 0;
    
    for (char ch: n) {
        if (ch == '4' || ch == '7')
            lucky_digit_count++;
    }

    string str = to_string(lucky_digit_count);

    for (char ch: str)
        if (ch != '4' && ch != '7')
            return false;

    return true;
}