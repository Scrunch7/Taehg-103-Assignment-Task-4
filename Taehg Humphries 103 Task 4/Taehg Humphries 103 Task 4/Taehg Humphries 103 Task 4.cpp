#include <iostream>

using std::cout;
using std::cin;
using std::string;


void Line(int dashes)//declaring function for line
{
	for (int i = 0; i < dashes; i++)
	{
		cout << "-";
	}
}

void Hangman()//declaring function
{
	cout << "   ___    \n";
	cout << "  |   |   \n";
	cout << "  |   o   \n";
	cout << "  |  \\|/ \n";
	cout << "  |   |   \n";
	cout << "  |  / \\ \n";
	cout << "  |       \n";
	cout << "  |       \n";
	cout << "-----     \n";
}

void InvertHangMan()//declaring function
{
	cout << "   ___    \n";
	cout << "  |   |   \n";
	cout << "  |  \\ / \n";
	cout << "  |   |   \n";
	cout << "  |  \\|/ \n";
	cout << "  |   o   \n";
	cout << "  |       \n";
	cout << "-----     \n";
}

void WalkMan()//declaring function
{
	cout << "     o    \n";
	cout << "    \\|/  \n";
	cout << "     |    \n";
	cout << "    / \\  \n";
}


char Play()
{
	char guessLetter, realLetter;//declarung 2 varibles
	realLetter = 'o';
	for (int i = 0; i < 3; i++)
	{
		cin >> guessLetter;
		if (guessLetter == realLetter)//checking condition 
		{
			cout << "\nYour guess is correct!\n";
			WalkMan();
			break;
		}
		else
		{
			if (i < 2)

				cout << "\nSorry, Try again...\n";
			else
			{
				cout << "\nYour guess is wrong\n";
				InvertHangMan();
			}
		}
	}
	return(guessLetter);//returning the value of the guess number
}


int main()
{
	int dashes = 67;
	string answer;

	cout << "\nWelcome to play HangMan. This game is to check your spelling skill.\n";

	Line(dashes);
	cout << "\n";

	Hangman();
	cout << "\nGuess the missing letter in Yo_bee: ";
	answer = Play();//) calling function and Assign the return value of the function
}



