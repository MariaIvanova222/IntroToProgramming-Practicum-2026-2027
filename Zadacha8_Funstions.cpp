// Zadacha8_Funstions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



int mixNums(int number1, int number2)
{
    int newNumber = 0;

    while (number1 != 0 && number2 != 0)
    {
        newNumber *= 100;
        unsigned digitFromNumber1 = number1 % 10;
        unsigned digitFromNumber2 = number2 % 10;        
        newNumber = newNumber + (digitFromNumber2 + digitFromNumber1 * 10);       
        number1 /= 10;
        number2 /= 10;
    }

    if (number1 != 0)
    {
        while (number1 != 0)
        {
            newNumber *= 10;
            unsigned digit = number1 % 10;
            newNumber = newNumber + digit;
            number1 /= 10;
        }
    }

    else if (number2 != 0)
    {
        while (number2 != 0)
        {
            newNumber *= 10;
            unsigned digit = number2 % 10;
            newNumber = newNumber + digit;
            number2 /= 10;
        }
    }

    return newNumber;
    
}

int main()
{
    int number1, number2;
    std::cin >> number1 >> number2;

    std::cout << mixNums(number1, number2);
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
