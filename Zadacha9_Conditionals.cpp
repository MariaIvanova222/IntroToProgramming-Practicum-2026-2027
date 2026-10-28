// Zadacha9_Conditionals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double sideA, sideB, sideC;
    std::cin >> sideA >> sideB >> sideC;

    if (sideA <= 0 || sideB <= 0 || sideC <= 0)
    {
        std::cout << "Invalid value!" << std::endl;
    }
    else if (sideA + sideB <= sideC || sideA + sideC <= sideB || sideB + sideC <= sideA)
    {
        std::cout << "Not a valid triangle!" << std::endl;
    }
    else
    {
        if (sideA == sideB && sideA == sideC)
        {
            std::cout << "Equilateral";
        }
        else if (sideA == sideB || sideA == sideC || sideB == sideC)
        {
            std::cout << "Isosceles";
        }
        else
            std::cout << "Scalene";

        double a2, b2, c2;
        a2 = sideA * sideA;
        b2 = sideB * sideB;
        c2 = sideC * sideC;

        if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2)
        {
            std::cout << ", Right" << std::endl;
        }
        else if (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2)
        {
            std::cout << ", Acute" << std::endl;
        }
        else
        {
            std::cout << ", Obtuse" << std::endl;
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
