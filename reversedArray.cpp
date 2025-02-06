#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 128;
void enterArray(int arr[MAX_SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}
void printArray(int arr[MAX_SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
void reverseArray(int arr[MAX_SIZE], int size)
{
	int i = 0;
	int j = size - 1;
	int temp;

	while (i < size / 2)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		i++;
		j--;
	}
}

int main()
{
	int size;
	int arr[MAX_SIZE];
	cin >> size;
	enterArray(arr, size);
	reverseArray(arr, size);
	printArray(arr, size);

}