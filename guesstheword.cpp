#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    string words[] = {"apple", "banana", "cherry", "grape", "orange"};
    string chosenWord = words[rand() % 5]; // Randomly choose a word from the list

    int wordLength = chosenWord.length();
    string displayWord(wordLength, '_'); // Initialize the display word with underscores

    int attempts = 0;

    cout << "Welcome to the Word Guessing Game!\n";
    cout << "Try to guess the word.\n";

    do {
        cout << displayWord << endl; // Display the current state of the word
        char userGuess;
        cout << "Enter your guess: ";
        cin >> userGuess;

        bool guessedCorrectly = false;

        for (int i = 0; i < wordLength; i++) {
            if (chosenWord[i] == userGuess) {
                displayWord[i] = userGuess; // Update the display word if the guess is correct
                guessedCorrectly = true;
            }
        }

        if (guessedCorrectly) {
            cout << "Good guess!\n";
        } else {
            cout << "Incorrect guess. Try again.\n";
        }

        attempts++;
    } while (displayWord != chosenWord && attempts < 10);

    if (displayWord == chosenWord) {
        cout << "Congratulations! You guessed the word in " << attempts << " attempts.\n";
    } else {
        cout << "You've run out of attempts. The word was: " << chosenWord << endl;
    }

    return 0;
}
