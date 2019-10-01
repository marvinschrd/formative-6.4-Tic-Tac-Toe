#include <iostream>
#include <vector>

void ShowMap(std::vector<char>board);
void GenerateMap(std::vector<char>&board);
bool SetNewPositionPlayer1(std::vector<char>&board, int player1Input, int mark1);
bool SetNewPositionPlayer2(std::vector<char>& board, int player2Input, int mark1);
void PlayGame(std::vector<char>& board, int player1Input, int mark1, int player2Input, int mark2, bool noError1, bool noError2, bool isRunning);
void CheckWin(std::vector<char> board, int mark1, int mark2, bool& isRunning);

int main() {
		std::vector<char>board;
		board.resize(10);
		int player1Input = 0;
		int player2Input = 0;
		char mark1 = 'X';
		char mark2 = 'O';
		bool isRunning = true;
		bool noError1 = false;
		bool noError2 = false;
		

		GenerateMap(board);
		PlayGame(board, player1Input, mark1, player2Input, mark2, noError1, noError2, isRunning);
	

	system("pause");
	return EXIT_SUCCESS;
}







	void ShowMap(std::vector<char>board) {

		std::cout << " PLAYER 1 : X  " << "  PLAYER 2 : O \n	";
		std::cout << "\n";

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

	bool SetNewPositionPlayer1(std::vector<char>&board, int player1Input, int mark1)
	{
		
		std::cout << "Player 1, choose a new position : \n"; std::cin >> player1Input;
		

		if (player1Input > 9 || player1Input < 1)
		{
			std::cout << "Impossible \n ";
			std::cout << "\n";
			return false;
		}

		if (board[player1Input] == 'O'|| board[player1Input] == 'X')
		{
			std::cout << "Impossible \n ";
			std::cout << "\n";
			return false;
		}
		

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

	bool SetNewPositionPlayer2(std::vector<char>& board, int player2Input, int mark2)
	{
		std::cout << "Player 2, choose a new position : \n";
		std::cin >> player2Input;
		
		
		if (player2Input > 9 || player2Input < 1)
		{
			std::cout << "Impossible \n ";
			std::cout << "\n";
			return false;
			
		}

		if (board[player2Input] == 'O'|| board[player2Input] == 'X')
		{
			std::cout << "Impossible \n";
			std::cout << "\n";
			
			return false;
		}
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

	void CheckWin(std::vector<char> board, int mark1, int mark2, bool& isRunning) {

		if (board[1] == board[2] && board[2] == board[3]) {

			if (board[1] == mark1)
			{
				std::cout << "Player 1 WIN !\n";
				isRunning = false;
				return;
			}
			else
			{
				std::cout << "player 2 WIN !\n";
				isRunning = false;
				return;
			}
		}
		if (board[4] == board[5] && board[5] == board[6]) {

			if (board[4] == mark1)
			{
				std::cout << "Player 1 WIN !\n";
				isRunning = false;
				return;
			}
			else
			{
				std::cout << "player 2 WIN !\n";
				isRunning = false;
				return;
			}
		}
		if (board[7] == board[8] && board[8] == board[9]) {

			if (board[7] == mark1)
			{
				std::cout << "Player 1 WIN !\n";
				isRunning = false;
				return;
			}
			else
			{
				std::cout << "player 2 WIN !\n";
				isRunning = false;
				return;
			}
		}
		if (board[1] == board[4] && board[4] == board[7]) {

			if (board[1] == mark1)
			{
				std::cout << "Player 1 WIN !\n";
				isRunning = false;
				return;
			}
			else
			{
				std::cout << "player 2 WIN !\n";
				isRunning = false;
				return;
			}
		}
		if (board[2] == board[5] && board[5] == board[8]) {

			if (board[2] == mark1)
			{
				std::cout << "Player 1 WIN !\n";
				isRunning = false;
				return ;
			}
			else
			{
				std::cout << "player 2 WIN !\n";
				isRunning = false;
				return;
			}
		}
		if (board[3] == board[6] && board[6] == board[9]) {

			if (board[3] == mark1)
			{
				std::cout << "Player 1 WIN !\n";
				isRunning = false;
				return ;
			}
			else
			{
				std::cout << "player 2 WIN !\n";
				isRunning = false;
				return;
			}
		}
		if (board[1] == board[5] && board[5] == board[9]) {

			if (board[1] == mark1)
			{
				std::cout << "Player 1 WIN !\n";
				isRunning = false;
				return;
			}
			else
			{
				std::cout << "player 2 WIN !\n";
				isRunning = false;
				return;
			}
		}
		if (board[3] == board[5] && board[5] == board[7]) {

			if (board[3] == mark1)
			{
				std::cout << "Player 1 WIN !\n";
				isRunning = false;
				return;
			}
			else
			{
				std::cout << "player 2 WIN !\n";
				isRunning = false;
				return;
			}
			
		}
		
	}

	void PlayGame(std::vector<char>& board, int player1Input, int mark1, int player2Input, int mark2, bool noError1, bool noError2, bool isRunning)
	{
		int caseFull = 0;
		while (isRunning == true)
		{
			ShowMap(board);

			while (!noError1)
			{
				noError1 = SetNewPositionPlayer1(board, player1Input, mark1);
			}
			 CheckWin(board, mark1, mark2,  isRunning);
			 if (!isRunning) {
				 return;
			 }
			 caseFull++;
			 if (caseFull == 9)
			 {
				 std::cout << "IT'S A TIE !\n";
				 break;
			 }
			ShowMap(board);
			while (!noError2)
			{
				noError2 = SetNewPositionPlayer2(board, player2Input, mark2);
			}
			CheckWin(board, mark1, mark2, isRunning);
			if (!isRunning) {
				return;
			}
			caseFull++;
			if (caseFull == 9)
			{
				std::cout << "It's a tie\n";
				break;
			}
			noError1 = false;
			noError2 = false;
		}
	}
	