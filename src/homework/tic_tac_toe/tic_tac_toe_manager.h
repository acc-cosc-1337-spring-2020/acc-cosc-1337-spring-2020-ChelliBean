//h
#include"tic_tac_toe.h"
#include<vector>
//#include<iostream>
#include<memory>
#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

class TicTacToeManager//:public TicTacToe
{
public:
	void save_game(std::unique_ptr<TicTacToe> &b);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager & manager);
	void get_winner_total(int& x, int& o, int& t);

private:
	std::vector<std::unique_ptr<TicTacToe>> games{};
	
	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };
	void update_winner_count(std::string winner);


};
#endif // !MANAGER_H
