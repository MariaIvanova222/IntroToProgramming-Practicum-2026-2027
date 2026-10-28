// Zadacha6_Conditionals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    unsigned number1, number2;
    std::cin >> number1 >> number2;
    if (number1 < 10 && number1 > 99 || number2 < 10 && number2 > 99)
    {
        std::cout << "Invalid" << std::endl;
    }
    else
    {
        unsigned newNumber = number1 * 100 + number2;
        std::cout << newNumber << std::endl;

        bool isIncreasing = true;
        while (newNumber > 10)
        {
            int lastDigit = newNumber % 10;
            int secondToLastDigit = newNumber / 10 % 10;
            if (lastDigit <= secondToLastDigit)
                isIncreasing = false;
            newNumber /= 10;
        }

        if (isIncreasing) 
            std::cout << "YES" << std::endl;
        else 
            std::cout << "NO";
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
