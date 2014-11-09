#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
using namespace std;

/*
    
The game of BombSweeper is a single-player game played on a rectangular grid. 
Each square in the grid is either a bomb (represented by 'B') or empty space (represented by '.'). 
The true identity of each square is hidden when the game begins. 
The object of the game is to correctly determine both the number of bombs on the board and their positions.
You are trying to write a program which predicts the percent likelihood that you will win a given game of BombSweeper. 
You've recently become so good at the game that your success or failure depends only on your first few moves.
To start, you pick a random square on the gameboard and uncover it. If the square you uncover is a bomb, you lose the game.
If the square is not a bomb, but one or more of its horizontal, vertical, and diagonal neighbors is, 
you are no better off than when you started and you must take another turn. If the square is not a bomb, 
and none of its (up to) eight neighbors are bombs either, then you win the game.
Given a String[] board, representing the game board, return a number between 0.0 and 100.0, inclusive, 
representing the percent likelihood of you winning the game.
*/

class BombSweeper
{
	public: 
	double winPercentage(vector<string> board);
};


double BombSweeper::winPercentage(vector <string> board){
	vector <string> newBoard = board;
	int size = board[0].size();
	int bombtotal = 0;
	std::vector<std::string> bomb_list;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < size; j++){
			char current = board[i].at(j); //the vector's char
			if (current == 'B'){
				bomb_list.push_back(std::to_string(i) + std::to_string(j));
				bombtotal++;
			}
		}
	}

	for (int h = 0; h < bomb_list.size(); h++){
		int row = std::stoi(bomb_list[h].at(0));
		int col = std::stoi(bomb_list[h].at(1));
		if (col+1 >= 0)
	}

}
