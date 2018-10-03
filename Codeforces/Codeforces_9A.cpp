#include <iostream>

using namespace std;

int main() {
    int yakko_points, wakko_points, max_points, chances, total_outcomes = 6;
    cin >> yakko_points >> wakko_points;
    
    // find out the max from yakko's and wakko's dice
    max_points = (yakko_points > wakko_points) ? yakko_points : wakko_points;
    // find the number of outcomes dot have to get in order to win
    chances = total_outcomes - max_points + 1; 

    // The probability can be expressed as (chances / total_outcomes)

    // if both the numerator and denominator are by 3 or 2
        // divide both the numerator and denomicator by 3 or 2
    for (int i = 3; i > 1; i--) {
        if (total_outcomes % i == 0 && chances % i == 0) {
            chances /= i;
            total_outcomes /= i;
        }
    }
    
    // show output
    cout << chances << "/" << total_outcomes << endl;
    return 0;
}