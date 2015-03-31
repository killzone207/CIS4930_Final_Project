#include <iostream>
#include <vector>
#include "defines.h"

using namespace std;

/*	 0 1 2 3 4 5 6	  
  0	|_|_|_|_|_|_|_|
  1	|_|_|_|_|_|_|_|
  2	|_|_|_|_|_|_|_|
  3	|_|_|_|_|_|_|_|
  4	|_|_|_|_|_|_|_|
  5	|_|_|_|_|_|_|_|
*/


int main(int argc, char** argv) {

// variables declaration
	int i, j, k;
	int board[ROW][COL];
	char init_input;
	int player;

// initializations
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			board[i][j] = 0;
		}
	}

// game start
	cout << "~~~~~****~~~~~ Welcome to ConnectFour! ~~~~~****~~~~~" << endl << endl
		<< "Please choose to be Red or Black.  (enter 'R' or 'B')" << endl;
		
	while (player == INVALID)
		init_input = cin.get();
		if (init_input == 'R' || init_input == 'r') {
			player = RED;
		}
		else if (init_input == 'B' || init_input == 'b') {
			player = BLACK;
		}
		else {
			player = INVALID;
			cout << "Incorrect input.  Please enter 'R' or 'B'" << endl;
		}

}