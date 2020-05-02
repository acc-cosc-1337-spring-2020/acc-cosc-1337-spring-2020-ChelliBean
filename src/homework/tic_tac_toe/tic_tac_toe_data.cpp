#include "tic_tac_toe_data.h"
#include"tic_tac_toe.h"
#include<fstream>
#include<iostream>


//cpp

void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
	
	ofstream file("tictactoe.txt");

	for (auto p : pegs)
	{
		file << p;
	}
	file << get_winner();
	file.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	std::vector<std::unique_ptr<TicTacToe>>boards;
	
	ofstream vecFile("boards.txt")

	return std::vector<std::unique_ptr<TicTacToe>>();
}
