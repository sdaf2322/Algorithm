#include <iostream>

using namespace std;

int main()
{
	int count;
	int num;
	int m;

	// 정수 개수 입력
	cin >> count;
	while (count < 1 || count > 40)
	{
		cin >> count;
	}

	// 정수 입력
	int* arr = new int[count];
	for (int i = 0; i < count; i++)
	{
		cin >> num;
		arr[i] = num;
	}

	// 약수와 배수를 구할 정수 선택
	cin >> m;
	while (1)
	{
		bool found = false;
		for (int i = 0; i < count; i++)
		{
			if (arr[i] == m)
			{
				found = true;
				break;
			}
		}
		if (!found)
			cin >> m;
		else
			break;
	}

	int divisor = 0;
	int multiple = 0;

	// 약수, 배수의 합
	for (int i = 0; i < count; i++)
	{
		int result1 = m % arr[i];
		if (result1 == 0)
			divisor = divisor + arr[i];

		int result2 = arr[i] % m;
		if (result2 == 0)
			multiple = multiple + arr[i];
	}

	// 출력
	cout << divisor << endl;
	cout << multiple << endl;

	return 0;
}