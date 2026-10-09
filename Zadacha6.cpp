// Zadacha6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int number;
    std::cin >> number;
    int units = number % 10;
    int tens = number / 10 % 10;
    int hundreds = number / 100;
    int sum = units + tens + hundreds;

    std::cout << "units = " << units << std::endl;
    std::cout << "tens = " << tens << std::endl;
    std::cout << "hundreds = " << hundreds << std::endl;
    std::cout << "sum = " << sum << std::endl;
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
