// Zadacha9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    double seconds;
    std::cin >> seconds;
    double minutes = std::floor(seconds / 60);
    seconds = seconds - minutes * 60;
    double hours = std::floor(minutes / 60);
    minutes = minutes - hours * 60;
    double days = std::floor(hours / 24);
    hours = hours - days * 24;
    //0 days, 1 hours, 0 minutes, 0 seconds
    std::cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << std::endl;
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
