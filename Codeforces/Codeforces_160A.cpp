#include <bits/stdc++.h>
using namespace std;

int sum(const vector<int> &, int, int);
int min_coins(const vector<int> &);
void vin(vector<int> &, int);

int main(void) {
    int n;
    cin >> n;
    vector<int> coins;

    vin(coins, n); // vector input
    sort(coins.begin(), coins.end()); // sort the vector
    cout << min_coins(coins) << endl; // output result

    return 0;
}

void vin(vector<int> &v, int n) {
    int input;
    while(n--) {
        cin >> input;
        v.push_back(input);
    }
}

int min_coins(const vector<int> &coins) {
    int last_pos, sum_of_after, sum_of_before, i, j, count;

    last_pos = coins.size() - 1; // last elem of coins (largest one)
    sum_of_after = sum(coins, last_pos, last_pos); // sum from last_pos to last_pos
    sum_of_before = sum(coins, 0, last_pos - 1); // sum from 0 to last_pos - 1


    i = last_pos, j = last_pos - 1, count = 1;
    while(sum_of_before >= sum_of_after) {
        count++;
        sum_of_after = sum(coins, --i, last_pos);
        sum_of_before = sum(coins, 0, --j);
    }

    return count;
}


int sum(const vector<int> &data, int start, int end) {
    int result = 0;
    for (int i = start; i <= end; i++)
        result += data.at(i);
    return result;
}
