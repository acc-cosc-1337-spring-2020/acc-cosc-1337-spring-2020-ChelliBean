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
	o = o_win;
	x = x_win;
	t = ties;
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X")
	{
		x_win ++;
	}
	else if (winner == "O")
	{
		o_win ++;
	}
	else
	{
		ties ++;
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	// TODO: insert return statement here
		out << "All games played: \n";

		for (auto game : manager.games)
		{
			out << "\n";
			out << game;
			std::string w = game.get_winner();
			out << "\n";
			out << "the winner is: " << w << "\n";
		}

		out << "The winner is X " << manager.x_win << "\n";
		out << "The winner is O " << manager.o_win << "\n";
		out << "It's a tie " << manager.ties << "\n";
		
		return out;
}
