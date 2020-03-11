#include "tic_tac_toe.h"
//cpp

bool TicTacToe::game_over()
{
	return check_board_full();
}

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

	
	clear_board();
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

	pegs[position - 1] = player;
	 set_next_player();
}

void TicTacToe::display_board() const
{
	for (int i = 0; i < 9; i += 3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}
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

bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size(); ++i)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}
	return true;
}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}
