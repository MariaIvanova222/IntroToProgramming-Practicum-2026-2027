// Zadacha8_Conditionals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a, b;
    int operation;

    std::cout << "1. Addition \n2. Subtraction \n3. Multiplication \n4. Division  \n5. Division with remainder \nChoice: "; 

    std::cin >> operation;
    std::cin >> a >> b;

    if (operation == 4 && b == 0 || operation == 5 && b == 0)
    {
        std::cout << "Division by zero" << std::endl;
    }
    else
    {
        double result;

        switch (operation)
        {
        case 1: 
        {
            result = a + b;
            std::cout << result;
        }
            break;
        case 2: 
        { 
            result = a - b;
            std::cout << result << std::endl;
        }
            break;
        case 3: 
        {
            result = a * b;
            std::cout << result << std::endl;
        }
            break;
        case 4: 
        {
            result = a / (b * 1.00);
            std::cout << result << std::endl;
        }
            break;
        case 5: 
        {
            result = a % b;
            std::cout << result << std::endl;
        }
            break;
        default: std::cout << "Invalid option" << std::endl;
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
