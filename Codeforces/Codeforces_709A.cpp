#include <iostream>

using namespace std;

int main() {
    int oranges, max_size, max_size_waste_section;
    cin >> oranges >> max_size >> max_size_waste_section;

    int oranges_size[oranges];
    for (int i = 0; i < oranges; i++)
        cin >> oranges_size[i];

    int waste_box = 0, count = 0;

    for (int i = 0; i < oranges; i++) {
        // if the oranges_size[i] is less than or equal to max_size count it
        if (oranges_size[i] <= max_size)
            waste_box += oranges_size[i];

        // when the waste_box gets full, count
        if (waste_box > max_size_waste_section) {
            count++;
            waste_box = 0;
        }
    }

    cout << count << endl;
    return 0;
}