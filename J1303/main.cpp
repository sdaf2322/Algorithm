#include <iostream>

using namespace std;

int main()
{
	int height;
	int width;

	// �簢�� height, width �Է�
	cin >> height >> width;
	while (height < 1 || height > 100 || width < 1 || width > 100)
	{
		cin >> height >> width;
	}

	// �簢�� ���
	int output = 1;
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << output << " ";
			output++;
		}
		cout << endl;
	}
	
	return 0;
}