#include <iostream>
#include <vector>

void ShowMap(std::vector<int>board);

int main() {
		std::vector<int>board{ 0,1,2,3,4,5,6,7,8,9 };
		board.resize(10);
		int userInput = 0;
	ShowMap(board);



	system("pause");
	return EXIT_SUCCESS;
}
	void ShowMap(std::vector<int>board) {


		std::cout << "		|		|		" << "\n";
		std::cout << "	" << board[1] << "	|	" << board[2] << "	|	" << board[3] << "\n";
		std::cout << "    ____________|_______________|____________\n";
		std::cout << "		|		|\n";
		std::cout << "	" << board[4] << "	|	" << board[5] << "	|	" << board[6] << "\n";
		std::cout << "    ____________|_______________|____________\n";
		std::cout << "		|		|\n";
		std::cout << "	" << board[7] << "	|	" << board[8] << "	|	" << board[9] << "\n";
		std::cout << "		|		|		" << "\n";
		std::cout << "\n";
	}

	/*int SetNewPosition(std::vector<int>board, int userInput)
	{
		std::cout << "Choose a new position : \n";
		std::cin >> userInput;

		if (userInput == 1 && board[1] == 1) 
		{
			board[1] = 'X';
		}
		if (userInput == 2 && board[2] == 2)
		{
			board[2] = 'X';
		}
		if (userInput == 3 && board[3] == 3)
		{
			board[3] = 'X';
		}
		if (userInput == 4 && board[1] == 1)
		{
			board[1] = 'X';
		}
		if (userInput == 1 && board[1] == 1)
		{
			board[1] = 'X';
		}
		if (userInput == 1 && board[1] == 1)
		{
			board[1] = 'X';
		}
		if (userInput == 1 && board[1] == 1)
		{
			board[1] = 'X';
		}
		if (userInput == 1 && board[1] == 1)
		{
			board[1] = 'X';
		}
		if (userInput == 1 && board[1] == 1)
		{
			board[1] = 'X';
		}
	}*/
