// Zadacha8_Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    unsigned n;
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "Invalid number!" << std::endl;
    }
    else
    {
        int steps = 0;
        int maxValue = n;

        std::cout << "Sequence: " << n << " ";

        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = 3 * n + 1;
            }
            std::cout << n << " ";
            steps++;

            if (maxValue < n)
            {
                maxValue = n;
            }
        }
        std::cout << std::endl;
        std::cout << "Steps: " << steps << std::endl;
        std::cout << "Max value: " << maxValue << std::endl;
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
