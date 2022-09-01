#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

bool EvalGuess(int guessValue, int toGuess);

int main()
{
	srand(time(NULL));

	int numToGuess = rand() % 10 + 1;
	int GuessValue = 0;

	cout << "Guess a number between 1 and 10 inclusive.\n\n";
	cin >> GuessValue;

	EvalGuess(GuessValue, numToGuess);

	return 0;
}

bool EvalGuess(int guessValue, int toGuess)
{
	if (guessValue == toGuess)
	{
		cout << "You guessed correctly.\n\n";
		return true;
	}

	cout << "You failed.\n\n";
	return false;
}
