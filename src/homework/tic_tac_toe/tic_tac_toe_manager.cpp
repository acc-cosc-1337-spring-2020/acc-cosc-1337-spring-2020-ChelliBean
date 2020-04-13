#include "tic_tac_toe_manager.h"
#include"tic_tac_toe.h"
#include<iostream>

using std::cout; using std::cin;

//cpp

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());
}

void TicTacToeManager::get_winner_total(int & x, int & o, int & t)
{
	cout << "The winner is X " << x_win << "\n";
	cout << "The winner is O " << o_win << "\n";
	cout << "It's a tie " << ties << "\n";
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X")
	{
		x_win += 1;
	}
	else if (winner == "O")
	{
		o_win += 1;
	}
	else
	{
		ties += 1;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	// TODO: insert return statement here
	out;
		for (auto game : manager.games)
		{
			out << game;
			std::string w = game.get_winner();
			out << "the winner is: " << w << "\n";
		}
		
		return out;
}
