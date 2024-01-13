#include <iostream>

using namespace std;

int main()
{
	int width;

	// 사각형 범위 입력
	cin >> width;
	while (width < 1 || width > 100)
	{
		cin >> width;
	}

	int** arr = new int*[width];
	for (int i = 0; i < width; i++)
	{
		arr[i] = new int[width];
	}

	// 사각형 출력
	int output = 1;
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
				arr[i][j] = output;
			else
				arr[i][j] = arr[i][j - 1] + width;

			cout << arr[i][j] << " ";
		}

		output++;
		cout << endl;
	}

	return 0;
}