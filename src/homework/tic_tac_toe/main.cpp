#include<iostream>
#include "tic_tac_toe.h"
#include"tic_tac_toe_manager.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"

using std::cout; using std::cin;

int main() 
{

	std::string option = "Y";
	TicTacToeManager manager;
	do
	{
		std::string first_player = "X";

		bool winner = true;
		int x;
		int o;
		int t;


		TicTacToe game(3);

		while (!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"));
		{
			try
			{
				cout << "Player one enter 'X' or 'O': ";
				cin >> first_player;
				game.start_game(first_player);
			}
			catch (Error e)
			{
				cout << e.get_message() << "\n";
			}
		}
		do {
			cin >> game;
			cout << game;

			winner = game.game_over();

		} while (winner == false);


		manager.save_game(game);
		cout << "\n";
		cout << game;
		cout << "\n";
		manager.get_winner_total(x, o, t);
		cout << "\n";
		cout << "The winner is " << game.get_winner() << "\n";

		cout << "Y to continue: " << "\n";
		cin >> option;
		cout << "\n";
	} while (option == "Y" || option == "y");

	cout << manager;

	

	return 0;
}







	/*std::string first_player;

	int position;
	int start{  };
	char nextTurn;

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
					game.display_board();

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
	} while (first_player != "O" ||  first_player != "X");*/