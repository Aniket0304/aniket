#include <iostream>
using namespace std;

int main() {
    int lowerBound = 1;
    int upperBound = 10;

    cout << "Think of a number between 1 and 100. I'll try to guess it by asking yes/no questions." << endl;

    while (true) {
        // Calculate the middle number
        int guess = (lowerBound + upperBound) / 2;

        // Ask the user if the number is bigger than the guess
        cout << "Is the number bigger than " << guess << "? (yes/no): ";
        string response;
        cin >> response;

        // If the user says yes, update the lower bound
        if (response == "yes") {
            lowerBound = guess + 1;
        }
        // If the user says no, update the upper bound
        else if (response == "no") {
            upperBound = guess;
        }
        // If the user enters anything else, ask again
        else {
            cout << "Invalid input. Please enter yes or no." << endl;
            continue;
        }

        // If the lower bound is equal to the upper bound, we've found the number!
        if (lowerBound == upperBound) {
            cout << "Ah-ha! I think the number is " << lowerBound << ". Am I correct?" << endl;
            cin >> response;
            if (response == "yes") {
                cout << "Yay! I guessed it correctly!" << endl;
            } else {
                cout << "Oh no! I made a mistake. Better luck next time!" << endl;
            }
            break;
        }
    }

    return 0;
}