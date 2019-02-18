#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

// Entry point for our application
int main()
{
	PrintIntro();
	PlayGame();
	if (AskToPlayAgain() == true) {
		PlayGame();
	}
	return 0; //exit the application
}

void PrintIntro()
{
	// Game introduction
	constexpr int WORLD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows\n";
	cout << "Can you guess the " << WORLD_LENGTH << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

void PlayGame()
{
	constexpr int NUMBER_OF_TURNS = 5;

	for (int i = 0; i < NUMBER_OF_TURNS; i++) {
		string Guess = GetGuess();
		cout << "Your guess was " << Guess << endl;
		cout << endl;
	}
}

string GetGuess()
{
	// Get a guess form the player
	string Guess = "";
	cout << "Please enter a guess: ";
	getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again?";
	string Response = "";
	getline(cin, Response);
	if (Response[0] == 'y' || Response[0] == 'Y') {
		return true;
	}else if (Response[0] == 'n' || Response[0] == 'N'){
		return false;
	}
}
