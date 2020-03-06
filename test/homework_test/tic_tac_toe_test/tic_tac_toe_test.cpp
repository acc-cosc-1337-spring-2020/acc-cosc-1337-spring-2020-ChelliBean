#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"tic_tac_toe.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can't call mark board before start game")
{
	TicTacToe game;
	REQUIRE_THROWS_AS(game.mark_board(0), Error);

}