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

	// 사각형 출력
	for (int i = 1; i <= width; i++)
	{
		int output = i;
		for (int j = 1; j <= width; j++)
		{
			cout << output << " ";
			output = output + i;
		}

		cout << endl;
	}

	return 0;
}