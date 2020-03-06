#include<iostream>
#include "tic_tac_toe.h"

using std::cout; using std::cin;

int main() 
{
	TicTacToe game;

	std::string first_player;

	cout << "Player one enter 'X' or 'O': ";
	cin >> first_player;

	game.start_game(first_player);
		
	return 0;
}