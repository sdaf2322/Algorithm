#include <iostream>

using namespace std;

int main()
{
	int width;

	// �簢�� ���� �Է�
	cin >> width;
	while (width < 1 || width > 100)
	{
		cin >> width;
	}

	// �簢�� ���
	bool flag = false;
	for (int i = 1; i <= width; i++)
	{
		// Ȧ�� ���� ���
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
		// ¦�� ���� ��� 
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