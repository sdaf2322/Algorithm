#include <iostream>

using namespace std;

int main()
{
	int num1;
	int num2;
	int num3;

	// ���� ���� �Է�
	cin >> num1 >> num2 >> num3;
	while (num1 < 100 || num1 > 999 || num2 < 100 || num2 > 999 || num3 < 100 || num3 > 999)
	{
		cin >> num1 >> num2 >> num3;
	}

	int result = num1 * num2 * num3;
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int outputArr[10] = {0,};

	// ���� ���� ���
	for (int i = 0; i < 10; i++)
	{
		int count = 0;
		int output = result;
		int tempResult = result;
		bool flag = false;

		while (1)
		{
			// ó���� ���
			if (!flag)
			{
				output = tempResult % 10;

				// ���ڰ� ���� ���� ī��Ʈ
				if (arr[i] == output)
					count++;

				flag = true;
			}
			// ó���� �ƴ� ���
			else
			{
				// �ڸ����� �ش��ϴ� ���� ���
				tempResult = tempResult / 10;
				if (tempResult == 0)
					break;
				output = tempResult % 10;

				// ���ڰ� ���� ���� ī��Ʈ
				if (arr[i] == output)
					count++;
			}
		}

		outputArr[i] = count;
	}

	// ���� ���� ���
	for (int i = 0; i < 10; i++)
	{
		cout << outputArr[i] << endl;
	}

	return 0;
}