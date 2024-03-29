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

	char arr[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
					'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	char** outputArr = new char* [width];
	for (int i = 0; i < width; i++)
	{
		outputArr[i] = new char[width];
	}

	// 출력 값 초기화
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < width; j++)
		{
			outputArr[i][j] = ' ';
		}
	}

	// 출력 값 정의
	int num = 0;
	for (int i = 0; i < width; i++)
	{
		for (int j = i; j < width; j++)
		{
			outputArr[j][width - 1 - j + i] = arr[num];
			num++;
			if (num == 26)
				num = 0;
		}
	}

	// 사각형 출력
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << outputArr[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}