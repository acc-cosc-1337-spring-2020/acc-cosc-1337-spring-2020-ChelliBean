#include "tic_tac_toe.h"
//cpp

void TicTacToe::start_game(std::string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
	}
	else
	{
		throw Error("X's or O's only!");
	}
}

void TicTacToe::mark_board(int position)
{
	if (position >= 1 && position <= 9)
	{

	}
	else if(position < 1 || position > 9)
	{
		throw Error("Out of range");
	}
	else
	{
		throw Error("Cannot be empty");
	}

	return set_next_player();
}

std::string TicTacToe::get_player() const
{
	return std::string(player);
}

void TicTacToe::set_next_player()
{
	if(player =="X")
	{
		player = "O";
	}
	else if (player == "O")
	{
		player = "X";
	}

}
