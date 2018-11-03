#include <bits/stdc++.h>
using namespace std;

struct score {int before, after;};
bool is_rated(score *, int);
bool is_sorted(score *, int);

int main(void) {
    int n;
    cin >> n;
    score data[n];

    for (int i = 0; i < n; i++) 
        cin >> data[i].before >> data[i].after;

    if ( is_rated(data, n) ) 
        cout << "rated" << endl;
    else if (!is_rated(data, n) && is_sorted(data, n))
        cout << "maybe" << endl;
    else
        cout << "unrated" << endl;

    return 0;
}

bool is_rated(score *arr, int n) {
    for (int i = 0; i < n; i++)
        if (arr[i].after != arr[i].before)
            return true;
    
    return false;
}

bool is_sorted(score *arr, int n) {
    for (int i = 0; i < n - 1; i++)
        if (arr[i].before < arr[i + 1].before)
            return false;
        
    return true;
}
