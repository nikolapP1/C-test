#include <iostream>
using namespace std;
int main()
{
/*int n;
cin >> n;
bool flag;
while (n > 0) {
	if (n % 10 == 1) {
		flag = true;
		break;
	}
	else {
		flag = false;
	}

	n /= 10;
}
if (flag) {
	cout << "YES";
}
else {
	cout << "NO";
}
*/

	/*int a, b, result = 1;
	cin >> a>>b;
	for (int i = a; i <= b; i++) {
		result *= i;
	}
	cout << result;
	
	*/
	/*int n, min, max;
	cin >> n;
	const int MAX_SIZE = 128;
	int arr[MAX_SIZE];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
		cout << "Min is: " << min << " Max is: " << max << endl;
		
		return 0;
		*/

	/*const int MAX_SIZE = 128;
	int n, max, min, maxIndex = 0, minIndex = 0;

	cin >> n;

	int arr[MAX_SIZE];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	max = arr[0];
	min = arr[0];

	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxIndex = i;
		}
		if (min > arr[i]) {
			min = arr[i];
			minIndex = i;
		}
	}

	arr[minIndex] = max;
	arr[maxIndex] = min;

	for (int i = 0; i < n; i++) {
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}


	cout << "max: " << max << endl;
	cout << "min: " << min << endl;

	return 0;


	*/

	int n;
	cin >> n;
	const int MAX_SIZE = 128;
	int arr[MAX_SIZE];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int positive = arr[0];
	for (int i = 0; i < n; i++) {
		if (positive >= 0) {
			cout << positive;
		}
	}














}
