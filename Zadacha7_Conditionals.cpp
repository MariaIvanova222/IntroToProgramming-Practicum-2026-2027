// Zadacha7_Conditionals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    unsigned a, x, y;
    std::cin >> a;
    std::cin >> x >> y;

    if (a <= 0 || x < 0 || y < 0)
    {
        std::cout << "Invalid!";
    }
    else
    {
        bool isWhite = false;
        bool isBlack = false;
   
        if ((x / a) % 2 == 0 && (y / a) % 2 == 0)
        {
            isBlack = true;
        }
        else if ((x / a) % 2 != 0)
        {
            isWhite = true;
        }
        else if ((y / a) % 2 != 0)
        {
            isWhite = true;
        }
        else
            isBlack = false;

        if (isWhite)
            std::cout << "white" << std::endl;
        else
            std::cout << "black" << std::endl;
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
