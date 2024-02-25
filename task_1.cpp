#include <iostream>
using namespace std;
// Написати функцію для знаходження найбільшого з двох чисел

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

int main()
{
    cout << getMaxValue(5,6);
    return 0;
}
