#include <iostream>
using namespace std;
int main()
{
	const int MAX_SIZE = 128;
	int matrix[MAX_SIZE][MAX_SIZE];
	int rows, cols;
	cin >> rows >> cols;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	} 

	cout << "The matrix is :" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{


			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}


	cout << "The primary diagonal is:  " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{


			if (i == j)
			{
				cout << matrix[i][j] << " ";

			}
		}
		cout << endl;
	}
	cout << "Under the primary diagonal:  " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i > j)
			{
				cout << matrix[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << "Over the primary diagonal " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i < j)
			{
				cout << matrix[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << "Secondary diagonal" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i + j == rows - 1) {
				cout << matrix[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << "Over secondary diagonal" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i + j <= rows - 2) {
				cout << matrix[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << "under secondary diagonal" << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			if (i + j >= rows) {
				cout << matrix[i][j] << " ";
			}
		}
		cout << endl;
	}
	cout << "Transposed matrix: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {


			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Transposed by secondary diagonal: " << endl;
	for (int i = rows - 1; i >= 0; i--)
	{
		for (int j = cols - 1; j >= 0; j--) {
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
}

	
	
















	
	





