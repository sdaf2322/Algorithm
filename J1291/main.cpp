#include <iostream>

int main()
{
	int start;
	int end;

	// ������ ���� �Է�
	std::cin >> start >> end;
	while (start < 2 || start > 9 || end < 2 || end > 9)
	{
		std::cout << "INPUT ERROR!" << std::endl;
		std::cin >> start >> end;
	}

	// ���� ���� �� ������ ���� ��� ������ ���
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
	// ���� ���� �� ������ ū ��� ������ ���
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