#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator

    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have picked a number between 1 and 100. Try to guess it.\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again.\n";
        }

        attempts++;
    } while (userGuess != randomNumber);

    cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";

    return 0;
}
