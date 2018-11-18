#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int total, id;
} student_mark;

int main() {
    int n, j = 1;
    cin >> n;
    student_mark stdata;
    vector<student_mark> data;

    int english, german, math, history;
    while(n--) {
        cin >> english >> german >> math >> history;
        stdata.id = j++;
        stdata.total = english + german + math + history;
        data.push_back(stdata);
    }

    sort(data.begin(), data.end(), [](student_mark a, student_mark b) {
        return ( a.total > b.total ) || ( a.total == b.total  && a.id < b.id );
    });

    for ( auto it = data.begin(); it != data.end(); it++)
        if ( it->id == 1 )
            cout << it - data.begin() + 1 << endl;

    return 0;
}
