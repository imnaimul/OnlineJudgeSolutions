#include <bits/stdc++.h>
using namespace std;

void freq_inserter(map<char, int> &, string);
bool is_identical(map<char, int> &, map<char, int> &);

int main() {
    ios::sync_with_stdio(false);

    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    map<char, int> freq1, freq2;
    freq_inserter(freq1, s1);
    freq_inserter(freq1, s2);
    freq_inserter(freq2, s3);

    if ( is_identical(freq1, freq2) )
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    return 0;
}

void freq_inserter(map<char, int> &freq, string s) {
    for ( int i = 0; i < s.length(); ++i ) {
        if ( !freq.count( s[i] ) ) 
            freq.insert( {s[i], 1} );
        else 
            freq[ s[i] ]++;
    }
}

bool is_identical(map<char, int> &freq1, map<char, int> &freq2) {
    if ( freq1.size() != freq2.size() )
        return false;

    for ( auto it = freq1.begin(); it != freq1.end(); ++it ) {
        if ( !freq2.count( it->first ) )
            return false;

        if ( freq1[it->first] != freq2[it->first] )
            return false;
    }

    return true;
}
