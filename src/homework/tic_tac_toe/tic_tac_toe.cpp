#include "tic_tac_toe.h"
//cpp
using std::cout;

bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_diagonal_win() == true || check_row_win() == true)
	{
		set_winner();
		return true;
	}
	else if(check_board_full() == true)
	{
		winner = "C";
		return true;
	}
	else
	{
		return false;
	}
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
	if(position < 1 || position > 9 && pegs.size() == 9)
	{
		throw Error("Out of range");
	}
	if (position < 1 || position > 16 && pegs.size() == 16)
	{
		throw Error("Out of range");
	}
	else if(player =="")
	{
		throw Error("Must start game first.");
	}

	pegs[position - 1] = player;
	set_next_player();

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

bool TicTacToe::check_column_win()
{
	return false;
}

bool TicTacToe::check_row_win()
{
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	return false;
}

void TicTacToe::set_winner()
{
	if (player == "X")
	{
		winner = "O";
	}
	else
	{
		winner = "X";
	}
}

std::ostream & operator<<(std::ostream & out, const TicTacToe & t)
{
	for (std::size_t i = 0; i < t.pegs.size(); i += sqrt(t.pegs.size()))
	{
		out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2];

		if (t.pegs.size() == 16)
		{
			out << "|" << t.pegs[i + 3];
		}

		out << "\n";
	}
	return out;
}

std::istream & operator>>(std::istream & in, TicTacToe & b)
{
	// TODO: insert return statement here
	try
	{
		int position;
		cout << "\n";
		cout<< "Pick a spot on the board (1-9): " << "\n";
		in >> position;
		cout << "\n";
		b.mark_board(position);
		cout << "\n";
	}
	catch (Error e)
	{
		cout << e.get_message() << "\n";
	}
	return in;
}
