#include <iostream>

using namespace std;

int main()
{
	int width;

	// �簢�� ���� �Է�
	cin >> width;
	while (width < 1 || width > 100 || width % 2 == 0)
	{
		cin >> width;
	}

	char arr[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 
					'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	char outputArr[101][101] = {};

	// ��� �� ����
	int num = 0;
	for (int i = 0; i <= (width - 1) / 2; i++)
	{
		for (int j = (width - 1) / 2 - i; j <= (width - 1) / 2 + i; j++)
		{
			outputArr[j][(width - 1) / 2 - i] = arr[num];
			num++;
			if (num == 26)
				num = 0;
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