
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    char choice;

    do {
        int number = (rand() % 100) + 1;
        int guess = 0;
        int attempts = 0;

        cout << "\n===== NUMBER GUESSING GAME =====" << endl;

        do {
            cout << "Enter your guess (1-100): ";
            cin >> guess;

            if (guess < 1 || guess > 100) {
                cout << "Please enter a number between 1 and 100!" << endl;
                continue;
            }

            attempts++;

            if (guess > number) {
                cout << "Too High! Guess lower." << endl;
            }
            else if (guess < number) {
                cout << "Too Low! Guess higher." << endl;
            }
            else {
                cout << "\nCongratulations! You won!" << endl;
                cout << "Correct Number: " << number << endl;
                cout << "Total Attempts: " << attempts << endl;
            }

        } while (guess != number);

        cout << "\nDo you want to play again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for playing!" << endl;

    return 0;
}