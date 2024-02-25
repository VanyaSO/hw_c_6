#include <iostream>
using namespace std;
// Зробити перевантаженні функції для int, double та char (для першого завдання)

int getMaxValue(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

double getMaxValue(double num1, double num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

char getMaxValue(char num1, char num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    cout << getMaxValue(5, 6) << endl;
    cout << getMaxValue(7.0, 6.1) << endl;
    cout << getMaxValue('A', 'F') << endl;
    return 0;
}
