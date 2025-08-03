#include <iostream>
using namespace std;

int main() {
    int month;
    
    // The user is entering the month number
    cout << "Enter month number (1-12): ";
    cin >> month;

    // Using switch to determine number of days in the month
    switch (month) {
        // February case
        case 2:
            cout << "28 or 29 days";
            break;

        // Months with 30 days
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days";
            break;

        // Months with 31 days
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days";
            break;

        // Invalid month number
        default:
            cout << "Wrong month number, choose a valid month number";
    }

    // End the program
    return 0;
}
