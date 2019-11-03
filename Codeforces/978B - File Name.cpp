#include <iostream>
#include <string>
#include <vector>
using namespace  std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    
    vector<int> data;

    for (int i = 0; i < s.length(); ++i) {
        char ch = s[i];

        if (ch == 'x') {
            int j = i + 1;
            while(s[j] == ch) j++;
            data.push_back(j - i);
            i += (j - i);
        }
    }

    int count = 0;
    for ( auto it = data.begin(); it != data.end(); it++ )
        if (*it > 2)
            count += *it - 2;

    cout << count << endl;
    return 0;
}
