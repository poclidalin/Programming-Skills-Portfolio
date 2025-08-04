#include <iostream>
using namespace std;

int main() {
    // Declare a variable for storing the user input
    int number;

    // Asking the user to enter a number
    cout << "Choose a number: ";

    // Reading the number from the user
    cin >> number;

    // Checking if the number is even
    if (number % 2 == 0) 
        // If number is even, print this message
        cout << "The provided number is even" << endl;
    else
        // When the number is odd, print this message
        cout << "The provided number is odd" << endl;

    // End the program
    return 0;
}
