#include <iostream>
#include <vector>

void ShowMap(std::vector<char>board);
void GenerateMap(std::vector<char>&board);
void ChosePlayerMark(int& mark1, int& mark2);
void SetNewPositionPlayer1(std::vector<char>&board, int player1Input, int mark1);
void SetNewPositionPlayer2(std::vector<char>& board, int player2Input, int mark1);

int main() {
		std::vector<char>board;
		board.resize(10);
		int player1Input = 0;
		int player2Input = 0;
		char mark1 = 'X';
		char mark2 = 'O';
		GenerateMap(board);
	ShowMap(board);
	/*ChosePlayerMark(mark1, mark2);*/
	SetNewPositionPlayer1(board, player1Input, mark1);
	ShowMap(board);
	SetNewPositionPlayer2(board, player2Input, mark2);
	ShowMap(board);



	system("pause");
	return EXIT_SUCCESS;
}
	void ShowMap(std::vector<char>board) {


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

	void SetNewPositionPlayer1(std::vector<char>&board, int player1Input, int mark1)
	{
		std::cout << "Player 1, choose a new position : \n";
		std::cin >> player1Input;

		if (player1Input == 1 && board[1] == '1') 
		{
			board[1] = mark1;
		}
		if (player1Input == 2 && board[2] == '2')
		{
			board[2] = mark1;
		}
		if (player1Input == 3 && board[3] == '3')
		{
			board[3] = mark1;
		}
		if (player1Input == 4 && board[4] == '4')
		{
			board[4] = mark1;
		}
		if (player1Input == 5 && board[5] == '5')
		{
			board[5] = mark1;
		}
		if (player1Input == 6 && board[6] == '6')
		{
			board[6] = mark1;
		}
		if (player1Input == 7 && board[7] == '7')
		{
			board[7] = mark1;
		}
		if (player1Input == 8 && board[8] == '8')
		{
			board[8] = mark1;
		}
		if (player1Input == 9 && board[9] == '9')
		{
			board[9] = mark1;
		}
	}

	void SetNewPositionPlayer2(std::vector<char>& board, int player2Input, int mark2)
	{
		std::cout << "Player 2, choose a new position : \n";
		std::cin >> player2Input;

		if (player2Input == 1 && board[1] == '1')
		{
			board[1] = mark2;
		}
		if (player2Input == 2 && board[2] == '2')
		{
			board[2] = mark2;
		}
		if (player2Input == 3 && board[3] == '3')
		{
			board[3] = mark2;
		}
		if (player2Input == 4 && board[4] == '4')
		{
			board[4] = mark2;
		}
		if (player2Input == 5 && board[5] == '5')
		{
			board[5] = mark2;
		}
		if (player2Input == 6 && board[6] == '6')
		{
			board[6] = mark2;
		}
		if (player2Input == 7 && board[7] == '7')
		{
			board[7] = mark2;
		}
		if (player2Input == 8 && board[8] == '8')
		{
			board[8] = mark2;
		}
		if (player2Input == 9 && board[9] == '9')
		{
			board[9] = mark2;
		}
	}

	void GenerateMap(std::vector<char>&board)
	{
		
		board[1] = '1';
		board[2] = '2';
		board[3] = '3';
		board[4] = '4';
		board[5] = '5';
		board[6] = '6';
		board[7] = '7';
		board[8] = '8';
		board[9] = '9';

		std::cout << "\n";
		
	}

	void ChosePlayerMark(int& mark1, int& mark2) {

		int player1mark = 0;

		player1mark = rand() % 2 + 1;

		switch (player1mark)
		{
		case (1):

			mark1 = 'O';
			mark2 = 'X';
			break;
		case (2):

			mark1 = 'X';
			mark2 = 'O';
			break;
		}
	}