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

	char arr[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 
					'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	char** outputArr = new char* [width];
	for (int i = 0; i < width; i++)
	{
		outputArr[i] = new char[width];
	}

	// ��� �� ����
	int num = 0;
	bool flag = false;
	for (int i = 0; i < width; i++)
	{
		if (!flag)
		{
			for (int j = 0; j < width; j++)
			{
				outputArr[j][i] = arr[num];
				num++;
				if (num == 26)
					num = 0;
			}

			flag = true;
		}
		else
		{
			for (int j = width - 1; j >= 0; j--)
			{
				outputArr[j][i] = arr[num];
				num++;
				if (num == 26)
					num = 0;
			}

			flag = false;
		}
	}

	// �簢�� ���
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