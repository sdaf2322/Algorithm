#include <iostream>

using namespace std;

int main()
{
	int start;
	int end;

	// ������ ���� ����
	cin >> start >> end;
	while (start < 2 || start > 9 || end < 2 || end > 9)
	{
		cout << "INPUT ERROR!" << endl;
		cin >> start >> end;
	}

	// ���� ���� �� ������ ���� ��� ������ ���
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
	// ���� ���� �� ������ ū ��� ������ ���
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