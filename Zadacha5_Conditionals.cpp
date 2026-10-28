// Zadacha5_Conditionals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    unsigned month;
    std::cin >> month;
    
    if (month < 1 || month > 12)
    {
        std::cout << "Invalid month!";
    }
    else
    {

        if (month == 2)
        {
            unsigned year;
            std::cin >> year;

            if (year <= 0)
            {
                std::cout << "Invalid year!";
            }
            else
            {
                bool isLeapYear = false;
                if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                {
                    isLeapYear = true;
                }

                if (isLeapYear)
                    std::cout << "29";
                else std::cout << "28";
            }

        }
        else
        {

            switch (month)
            {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12: std::cout << "31" << std::endl;
                break;
            case 4: case 6: case 9: case 11: std::cout << "30" << std::endl;
                break;
            }
        }
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
