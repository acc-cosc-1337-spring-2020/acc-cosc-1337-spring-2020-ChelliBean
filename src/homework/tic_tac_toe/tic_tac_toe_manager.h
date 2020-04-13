//h
#include"tic_tac_toe.h"
#include<vector>
#include<iostream>
#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

class TicTacToeManager
{
public:
	void save_game(const TicTacToe b);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager & manager);
	void get_winner_total(int& x, int& o, int& t);

private:
	std::vector<TicTacToe>games{};
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	void update_winner_count(std::string winner);


};
#endif // !MANAGER_H
