#include <iostream>
using namespace std;

int main() {
    // Declare an array with 6 names and a variable to store the user's input
    string names[6] = {"Sam","Dave","Ian","Jake","Zac","Ron"};
    string inputName;

    // Asking the user to enter a name
    cout << "What is the name you want to search for? ";
    cin >> inputName;

    // Loop through the array to check if the name exists and stop program if found
    for (int x = 0; x < 6; x++) {
        if (inputName == names[x]) {
            cout << inputName << " is included on the list.";
            return 0;
        }
    }

    // When name was not found
    cout << inputName << " is not included on the list.";

    // End of program
    return 0;
}
