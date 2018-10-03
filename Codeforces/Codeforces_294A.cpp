#include <iostream>

using namespace std;
struct shoot {
    int wire_no;
    int bird_no;
};

int main() {
    int wires, shoot_count;
    cin >> wires;
    int bird_count[wires];

    // input the number of initial birds on each wire
    for (int i = 0; i < wires; i++)
        cin >> bird_count[i];

    // number of shoots
    cin >> shoot_count;
    shoot shoot_data[shoot_count];

    for (int i = 0; i < shoot_count; i++)
        cin >> shoot_data[i].wire_no >> shoot_data[i].bird_no;

    int current_wire, current_birds_on_wire, birds_on_left, birds_on_right;

    for (int i = 0; i < shoot_count; i++) {

        current_wire = shoot_data[i].wire_no - 1; // 0'based wire index
        current_birds_on_wire = bird_count[current_wire]; // the number birds currently on the wire
        birds_on_left = shoot_data[i].bird_no - 1; // birds on the left side
        birds_on_right = current_birds_on_wire - shoot_data[i].bird_no; // birds on the right side

        bird_count[current_wire] = 0;
        
        // if the current wire that we are shooting is not the first wire
        if (current_wire != 0)
            bird_count[current_wire - 1] += birds_on_left;
        
        // if the current wire that we are shotting is not the last wire
        if (current_wire != wires - 1)
            bird_count[current_wire + 1] += birds_on_right;
        
    }

    for (int i = 0; i < wires; i++) 
        cout << bird_count[i] << endl;

    return 0;
}