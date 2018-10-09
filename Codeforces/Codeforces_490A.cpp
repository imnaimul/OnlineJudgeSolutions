#include <iostream>
#include <string>
#include <vector>
#include <map>

int min(int a, int b) {return (a < b) ? a : b;}
int min(int a, int b, int c) {return (a < min(b, c)) ? a : min(b, c);}

using namespace std;

int main() {
    int n, input;
    cin >> n;

    // vector to keep the skill of i'th child
    vector<int> data;
    for (int i = 0; i < n; i++) {
        cin >> input;
        data.push_back(input);
    }

    // for keeping the number of programmers, mathematicians, sportmen
    map<string, int> skill_data;

    // initialize with 0
    skill_data.insert(make_pair("p", 0));
    skill_data.insert(make_pair("m", 0));
    skill_data.insert(make_pair("s", 0));

    // interate through the vector and count the number of programmers, mathematicians, sportmen
    for (int i = 0; i < n; i++) {
        switch (data.at(i)) {
            case 1:  skill_data["p"]++; break;
            case 2:  skill_data["m"]++; break;
            case 3:  skill_data["s"]++; break;
        }
    }
    
    int max_teams_can_be_formed;

    // In order to form teams, we need equal to or more than 1 Programmer + 1 Mathematician + 1 Sportman
    if (skill_data["p"] > 0 && skill_data["m"] > 0 && skill_data["s"] > 0)
        max_teams_can_be_formed =  min(skill_data["p"], skill_data["m"], skill_data["s"]);
    // when no team can be formed
    else
        max_teams_can_be_formed = 0;

    // print the maximum number of teams that can be formed
    cout << max_teams_can_be_formed << endl;


    int p = 0, m = 0, s = 0;

    while(max_teams_can_be_formed--) {
        // get the positions
        while( p < n && data.at(p) != 1 ) p++;
        while( m < n && data.at(m) != 2 ) m++;
        while( s < n && data.at(s) != 3 ) s++;
        
        // mutate the value at that position, so that we can find unique p, m & s each time
        // It's a way to mark, that these positions are taken
        data.at(p) = 0;
        data.at(m) = 0;
        data.at(s) = 0;

        // print the team
        cout << p + 1 << " ";
        cout << m + 1 << " ";
        cout << s + 1 << endl;
    }

    return 0;
}