#include <iostream>
using namespace std;

int main() {
    string answer;

    // Displaying the question
    cout << "What is the capital of France?";

    // Getting user input 
    cin >> answer;

    // Checking the answer
    if (answer == "Paris" || answer == "paris" || answer == "PARIS") {
        cout << "Correct answer!";
    } 
        else {
        cout << "Wrong answer!";
    }

    // End the program
    return 0;
}
