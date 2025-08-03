#include <iostream>
using namespace std;

int main() {

    // Declare the password
    int password = 12345;

    // Declare the variable to store the user`s input
    int userInput;

    // Declare the number of attempts made
    int attempts = 0;

    // Asking the user to enter password while attempts are less than 5
    while (attempts < 5) {
     cout << "Please enter your password:";
     cin >> userInput;

        // If the password is correct, the loop stops and the user is welcome
        if (userInput == password) {
            cout << "Access granted" << endl << "Welcome to the Secure Area!" << endl;
            break;
        } 

        else {
            // When the password is wrong, adds 1 to attempts and display how many atttempts left    
            attempts++;
            cout << "Incorrect password" << endl << "You have: " << 5 - attempts << " attempts left." << endl;
        }
    }

    // If user used all 5 attempts, 
    if (attempts == 5) {
      cout << "The maximum number of attempts have been exceeded!" << endl << "Authorities alerted!" << endl;
    }
    // End the program
    return 0;
}