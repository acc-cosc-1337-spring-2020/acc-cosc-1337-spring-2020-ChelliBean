#include<iostream>
#include "tic_tac_toe.h"

using std::cout; using std::cin;

int main() 
{
	TicTacToe game;

	std::string first_player;
	
	int position;
	int start{  };
	char nextTurn;
	
	cout << "Player one enter 'X' or 'O': ";
	cin >> first_player;

	do
	{
		try
		{
			game.start_game(first_player);

			do
			{
				cout << "Pick a spot on the board (1-9): " << "\n";
				cin >> position;

				try
				{
					game.mark_board(position);
				}
				catch (Error merr)
				{
					cout << merr.get_message();
				}
				cout << "Next Player press Y to continue: " << "\n";
				cin >> nextTurn;

			} while (nextTurn == 'y' && nextTurn == 'Y');
		}
		catch (Error blah)
		{
			cout << blah.get_message() << "\n";
			cout << "Player one selcet 'X' or 'O': " << "\n";
			cin >> first_player;
			start = 0;
		}
	} while (first_player != "O" ||  first_player != "X");

	return 0;
}