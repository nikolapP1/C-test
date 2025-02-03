#include <iostream>
using namespace std;
const int BOARD_SIZE = 3;
const int LINE_LENGTH = BOARD_SIZE;
const int PLAYERS = 2;

void init(char board[][BOARD_SIZE], char ch)
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			board[i][j] = ch;
		}
	}
}
void printTable(char board[][BOARD_SIZE])
{
	for (int i = 0; i < BOARD_SIZE; i++)
	{
		for (int j = 0; j < BOARD_SIZE; j++)
		{
			cout << "[" << board[i][j] << "]";
		}
		cout << endl;
	}
}

bool areValidCoordinates(int x, int y)
{
	return x >= 0 && x < BOARD_SIZE && y >= 0 && y < BOARD_SIZE;
}

void input(char board[][BOARD_SIZE], int& x, int& y)
{
	do
	{
		cin >>x>>y;
	} while (!areValidCoordinates(x, y) || board[x][y] != ' ');
}

int getConsecutiveDirection(const char board[][BOARD_SIZE], int row, int coll, int rowMove, int collMove)
{
	char ch = board[row][coll];
	int count = 0;
	while (areValidCoordinates(row, coll) && board[row][coll] == ch)
	{
		count++;
		row += rowMove;
		coll += collMove;
	}
	return count;
}
int getConsecutiveOnLine(const char board[][BOARD_SIZE], int row, int coll, int rowMove, int collMove)
{
	return getConsecutiveDirection(board, row, coll, rowMove, collMove) +
		getConsecutiveDirection(board, row, coll, -rowMove, -collMove) - 1;
}
bool isWinningMove(const char table[][BOARD_SIZE], int row, int coll)
{
	return getConsecutiveOnLine(table, row, coll, 0, 1) >= LINE_LENGTH || 
		getConsecutiveOnLine(table, row, coll, 1, 0) >= LINE_LENGTH || 
		getConsecutiveOnLine(table, row, coll, 1, 1) >= LINE_LENGTH || 
		getConsecutiveOnLine(table, row, coll, 1, -1) >= LINE_LENGTH;   
}

int main()
{
	
	char board[BOARD_SIZE][BOARD_SIZE];
	init(board, ' ');
	printTable(board);
	
	bool haveWinner = false;
	for (int i = 0, currentPlayer = 0; i < BOARD_SIZE * BOARD_SIZE && !haveWinner; i++, (++currentPlayer) %= PLAYERS)
	{
		int row, coll;
		input(board, row, coll);
		board[row][coll] = currentPlayer ? 'x' : 'o';
		printTable(board);
		haveWinner = isWinningMove(board, row, coll);
		}
	cout << (haveWinner ? "Win" : "Draw") << endl;
	


	
}