#include <iostream>
using namespace std;

int main() {

    // Count from 0 to 50
    for (int x = 0; x <= 50; x++) {
        cout << " " << x;
    }
    cout << endl;

    // Count down from 50 to 0
    for (int x = 50; x >= 0; x--) {
        cout << " " << x;
    }
    cout << endl;

    // Count from 30 to 50
    for (int x = 30; x <= 50; x++) {
        cout << " " << x;
    }
    cout << endl;
    
    // Count down from 50 to 10
    for (int x = 50; x >= 10; x -= 2) {
        cout << " " << x;
    }
    cout << endl;

    // Count from 100 to 200, step 5
    for (int x = 100; x <= 200; x += 5) {
        cout << " " << x;
    }
    cout << endl;

    // End the program
    return 0;
}
