#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
void vector_input(vector<int> &);

int main() {
    int x; cin >> x;
    vector<int> city_data;
    
    // take input to the vector
    for (int i = 0; i < x; i++)
        vector_input(city_data);

    int max, min;

    // iterate for each element in the city_data vector
    for (int i = 0; i < city_data.size(); i++) {
        // create two key value pair called max and min with initialization of zero
        max = 0, min = 0;

        // when i is zero
            // minimum is abs(city_data[0] - city_data[i + 1])
            // maximum is abs(city_data[0] - city_data[city_data.size() - 1])
        if (i == 0) {
            min = abs(city_data.at(0) - city_data.at(i + 1));
            max = abs( city_data.at(0) - city_data.at( city_data.size() -1 ) );
        } 

        // when i is not the first element and the last element
        else if (i != 0 && i != city_data.size() - 1) {
            // calculate maximum
            if (abs(city_data.at(i) - city_data.at(0)) > abs(city_data.at(i) - city_data.at(city_data.size() - 1)))
                max = abs(city_data.at(i) - city_data.at(0));
            else
                max = abs(city_data.at(i) - city_data.at(city_data.size() - 1));

            // calculate minimum
            if (abs(city_data.at(i) - city_data.at(i - 1)) < abs(city_data.at(i) - city_data.at(i + 1)))
                min = abs(city_data.at(i) - city_data.at(i - 1));
            else
                min = abs(city_data.at(i) - city_data.at(i + 1));
        } 
    
        // when i is the last position
        else if (i == city_data.size() - 1) {
            min = abs(city_data.at(i) - city_data.at(i - 1));
            max = abs(city_data.at(i) - city_data.at(0));
        }

        // print out the result
        cout << min << " " << max << endl;
    }

    return 0;
}

void vector_input(vector<int> &arr) {
    int input;
    cin >> input;
    arr.push_back(input);
}
