#include <iostream>

using namespace std;

int main()
{
	int height;
	int width;

	// 사각형 height, width 입력
	cin >> height >> width;
	while (height < 1 || height > 100 || width < 1 || width > 100)
	{
		cin >> height >> width;
	}

	// 사각형 출력
	int odd_Output = 1;
	bool flag = false;
	for (int i = 0; i < height; i++)
	{
		// 홀수 행일 경우
		if (!flag)
		{
			for (int j = 0; j < width; j++)
			{
				cout << odd_Output << " ";
				odd_Output++;
			}
			flag = true;
		}
		// 짝수 행일 경우
		else
		{
			int even_Output = odd_Output + width - 1;
			for (int j = 0; j < width; j++)
			{
				cout << even_Output << " ";
				even_Output--;
				odd_Output++;
			}
			flag = false;
		}	
		
		cout << endl;
	}

	return 0;
}