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