// Zadacha9_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

long long factorial(int number)
{
    long long factorial = 1;
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    return factorial;
}

bool isStrong(int number)
{
    int copy = number;
    long long sumOfFactorials = 0;
    while (copy != 0)
    {
        int currentDigit = copy % 10;
        sumOfFactorials += factorial(currentDigit);
        copy /= 10;
    }

    if (number == sumOfFactorials)
        return true;
    else
        return false;
}

int main()
{
    int number;
    std::cin >> number;
    std::cout << std::boolalpha << isStrong(number) << std::endl;
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
