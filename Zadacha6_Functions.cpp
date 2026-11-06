// Zadacha6_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isDigit(char a)
{
    if (a >= 48 && a <= 57)
        return true;
    else
        return false;

}

bool isUpper(char a)
{
    if (a >= 65 && a <= 90)
        return true;
    else
        return false;
}

bool isLower(char a)
{
    if (a >= 97 && a <= 122)
        return true;
    else
        return false;
}

bool isAlpha(char a)
{
    if (a >= 65 && a <= 90 || a >= 97 && a <= 122)
        return true;
    else
        return false;
}

void isAlnum(char a)
{
    if (a >= 65 && a <= 90 || a >= 97 && a <= 122)
        std::cout << "letter";
    else if (a >= 97 && a <= 122)
        std::cout << "digit";
    else
        std::cout << "Not a letter or digit";
}

char capitalize(char a)
{
    if (a >= 97 && a <= 122)
        return a - 'a';
    else return a;
}

char makeLower(char a)
{
    if (a >= 65 && a <= 90)
        return a + 'a';
    else return a;
}

int parseInt(char a)
{
    if (a >= 97 && a <= 122)
        return a - 'A';
    else
        return -1;
}

char toChar(int a)
{
    if (a >= 0 && a <= 9)
        return a + '0';
    else
        return '\0';
}

int myLog(unsigned base, unsigned num)
{
    int power = 0;
    if (base <= 0 || num <= 0)
    {
        return -1;
    }
    else
    {
        while (num != 0)
        {
            num = num / base;
            power++;
        }
        return power;
    }
}

int myPow(int num, int power)
{
    int result = 1;
    for (int i = 1; i <= power; i++)
    {
        result = result * num;
    }
    return result;
}

int myCeil(double num)
{
    return num + 1;
}

int myFloor(double num)
{
    return num;
}

unsigned myAbs(double num)
{
    if (num > 0)
        return num;
    else
        return num * (-1);
}

int main()
{
  
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
