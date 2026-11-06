// Zadacha4_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double distanceBetweenTwoPoints(int x1, int y1, int x2, int y2)
{
    return std::sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double trianglePerimeter(int x1, int y1, int x2, int y2, int x3, int y3)
{
    double sideA = distanceBetweenTwoPoints(x1, y1, x2, y2);
    double sideB = distanceBetweenTwoPoints(x2, y2, x3, y3);
    double sideC = distanceBetweenTwoPoints(x3, y3, x1, y1);
    return sideA + sideB + sideC;
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    std::cout << trianglePerimeter(x1, y1, x2, y2, x3, y3);
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
