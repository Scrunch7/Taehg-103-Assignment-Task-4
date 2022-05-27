#include <iostream>

using std::cout;
using std::cin;
using std::string;


void Line(int dashes)
{
	for (int i = 0; i < dashes; i++)
	{
		cout << "-";
	}
}

void Hangman()
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

void Deadman()
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

void WalkMan()
{
	cout << "     o    \n";
	cout << "    \\|/  \n";
	cout << "     |    \n";
	cout << "    / \\  \n";
}


char Play()
{
	char guess, letter;//declarung 2 varibles
	letter = 'o';
	for (int i = 0; i < 3; i++)
	{
		cin >> guess;
		if (guess == letter)//checking condition 
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
				Deadman();
			}
		}
	}
	return(guess);//returning the value of the guess number
}


int main()
{
	int dashes = 62;
	string answer;

	cout << "\nWelcome to Hangman. This game is to check your spelling skill.\n";

	Line(dashes);
	cout << "\n";

	Hangman();
	cout << "\nGuess the missing letter in Yo_bee: ";
	answer = Play();//) calling function and Assign the return value of the function
}



