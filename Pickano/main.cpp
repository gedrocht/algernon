#include "main.h"
#include "Pickano.h"

// The range of the random number to generate
#define RANDOM_MIN 1
#define RANDOM_MAX 100

int main() {
    srand((unsigned int)time(NULL));
    int numberToGuess = rand() % RANDOM_MAX + RANDOM_MIN;

    fprintf(stdout, "Pick a number between %i and %i\n", RANDOM_MIN, RANDOM_MAX);

    Pickano::play(cin, cout, numberToGuess);

    return 0;
}