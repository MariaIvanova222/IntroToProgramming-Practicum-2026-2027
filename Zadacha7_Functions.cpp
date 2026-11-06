// Zadacha7_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

unsigned numberWithoutHundreds(int num)
{
	if (num < 100)
		return -1;
	else
	{
		unsigned units = num % 10;
		unsigned tens = num / 10 % 10;
		unsigned thousands = num / 1000 % 10;
		int newNum = units + tens * 10 + thousands * 100;
		return newNum;
	}
}

void fourDigitNumsWithinRange(int m, int n)
{
	bool flag = false;
	for (int i = m; i <= n; i++)
	{
		int temp = numberWithoutHundreds(i);
		if (temp % 11 == 0)
		{
			flag = true;
			std::cout << i << " ";
		}
	}

	if (!flag)
		std::cout << "No such a number!" << std::endl;
}

int main()
{
	int m, n;
	std::cin >> m >> n;
	if (m > n)
	{
		std::cout << "Invalid range";
	}
	else
	{
		fourDigitNumsWithinRange(m, n);
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
