#include <iostream>

using namespace std;

bool can_pay_without_change(int cost, int r) {
    // if the cost can be paid with the coins of 10 burles then return true
    if (cost % 10 == 0)
        return true;
    // the remainder which we need to pay with one coin of r value
    int left_payment = cost % 10;
    return (left_payment == r) ? true : false;
}

int main() {
    int shovel_price, r;
    cin >> shovel_price >> r;

    int total_paid = 0, i = 1;
    
    while(1) {
        if(can_pay_without_change(i * shovel_price, r)) {
            cout << i << endl;
            break;
        }
        i++;
    }

    return 0;
}