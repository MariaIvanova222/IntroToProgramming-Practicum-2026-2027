// Zadacha3_Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    unsigned n;
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "Invalid number!";
    }
    else
    {
        int sumDivisors = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
                sumDivisors = sumDivisors + i;
        }
        if (sumDivisors == n)
            std::cout << "Perfect" << std::endl;
        else
            std::cout << "Not perfect" << std::endl;
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
