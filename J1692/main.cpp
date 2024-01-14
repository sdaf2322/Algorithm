#include <iostream>

using namespace std;

int main()
{
	int num1;
	int num2;

	// 곱할 숫자 입력
	cin >> num1;
	cin >> num2;
	while (num1 < 100 || num1 > 999 || num2 < 100 || num2 > 999)
	{
		cin >> num1;
		cin >> num2;
	}

	int output;

	// (3) 출력
	output = (num2 % 10) * num1;
	cout << output << endl;

	// (4) 출력
	output = ((num2 / 10) % 10) * num1;
	cout << output << endl;

	// (5) 출력
	output = ((num2 / 10) / 10) * num1;
	cout << output << endl;

	// (6) 출력
	output = num1 * num2;
	cout << output << endl;

	return 0;
}