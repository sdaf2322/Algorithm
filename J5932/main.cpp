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
	bool flag = false;
	for (int i = 1; i <= width; i++)
	{
		// 홀수 행일 경우
		if (!flag)
		{
			int output = 1;
			for (int j = 1; j <= width; j++)
			{
				cout << output << " ";
				output++;
			}

			flag = true;
			cout << endl;
		}
		// 짝수 행일 경우 
		else
		{
			int output = width;
			for (int j = 1; j <= width; j++)
			{
				cout << output << " ";
				output--;
			}

			flag = false;
			cout << endl;
		}
	}

	return 0;
}