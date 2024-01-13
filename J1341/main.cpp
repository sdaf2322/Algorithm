#include <iostream>

using namespace std;

int main()
{
	int start;
	int end;

	// 구구단 범위 설정
	cin >> start >> end;
	while (start < 2 || start > 9 || end < 2 || end > 9)
	{
		cout << "INPUT ERROR!" << endl;
		cin >> start >> end;
	}

	// 시작 갑이 끝 값보다 작은 경우 구구단 출력
	if (start <= end)
	{
		for (int i = start; i <= end; i++)
		{
			for (int j = 1; j < 10; j++)
			{
				int result = i * j;
				printf("%d * %d = %2d   ", i, j, result);
				if (j % 3 == 0)
					cout << endl;
			}

			cout << endl;
			cout << endl;
			cout << endl;
		}
	}
	// 시작 값이 끝 값보다 큰 경우 구구단 출력
	else
	{
		for (int i = start; i >= end; i--)
		{
			for (int j = 1; j < 10; j++)
			{
				int result = i * j;
				printf("%d * %d = %2d   ", i, j, result);
				if (j % 3 == 0)
					cout << endl;
			}

			cout << endl;
			cout << endl;
			cout << endl;
		}
	}

	return 0;
}