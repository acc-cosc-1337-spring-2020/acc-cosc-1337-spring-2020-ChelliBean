#include<string>
#include<vector>
#include<iostream>
#ifndef TICTACTOE_H
#define TICTACTOE_H


//h

class TicTacToe
{
public:
	TicTacToe(int s) : pegs(s*s," ") {}

	bool game_over();
	void start_game(std::string first_player);

	void mark_board(int position);

	std::string const get_player() { return player; }
	//void display_board()const;
	std::string get_winner()const { return winner; }

	friend std::ostream& operator<<(std::ostream& out, const TicTacToe& b);
	friend std::istream& operator>>(std::istream& in, TicTacToe& b);

protected:

	//std::vector<std::string> pegs{ 9, " " };
	std::vector<std::string> pegs{};
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();
	

private:

	void set_next_player();
	bool check_board_full();
	void clear_board();
	std::string player;
	/*std::vector<std::string> pegs{ 9, " " };
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();*/
	void set_winner();
	std::string winner;
};

#endif // !TICTACTOE_H

#ifndef ERROR_H
#define ERROR_H



class Error
{
public:
	Error(std::string msg) : message{ msg } {}

	std::string get_message()const { return message; }
	

private:
	std::string message;

};

#endif // !ERROR_H