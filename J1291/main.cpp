#include <iostream>

int main()
{
	int start;
	int end;

	// 구구단 범위 입력
	std::cin >> start >> end;
	while (start < 2 || start > 9 || end < 2 || end > 9)
	{
		std::cout << "INPUT ERROR!" << std::endl;
		std::cin >> start >> end;
	}

	// 시작 값이 끝 값보다 작은 경우 구구단 출력
	if (start <= end)
	{
		for (int i = 1; i < 10; i++)
		{
			for (int j = start; j <= end; j++)
			{
				int result = i * j;
				printf("%d * %d = %2d   ", j, i, result);
			}

			std::cout << std::endl;
		}
	}
	// 시작 값이 끝 값보다 큰 경우 구구단 출력
	else
	{
		for (int i = 1; i < 10; i++)
		{
			for (int j = start; j >= end; j--)
			{
				int result = i * j;
				printf("%d * %d = %2d   ", j, i, result);
			}

			std::cout << std::endl;
		}
	}

	return 0;
}