#include <iostream>
using namespace std;

int main() {

    int chosen_number = 7;
    int user_guess;

    // Array to store guesses
    int guesses_list[100];

    int count = 0;

    // Repeat until correct guess
    while (user_guess != chosen_number) {

        cout << "Enter your guess: ";
        cin >> user_guess;

        // Save guess in array
        guesses_list[count] = user_guess;

        count++;

        // Compare guesses
        if (user_guess > chosen_number) {
            cout << "Too high" << endl;
        }
        else if (user_guess < chosen_number) {
            cout << "Too low" << endl;
        }
        else {
            cout << "Correct" << endl;
        }
    }

    // Print all guesses
    cout << "\nAll guesses:" << endl;

    for (int i = 0; i < count; i++) {
        cout << guesses_list[i] << endl;
    }

    return 0;
}
