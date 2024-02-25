#include <iostream>
#include "arrays.h"
using namespace std;
// Написати 2 функції, що визначає мінімум і максимум (значення) елементів переданого їй масиву. Зробити через template

template<typename T>
T getMinValue(T arr[], int size)
{
    T minValue = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (minValue > arr[i]) {
            minValue = arr[i];
        }
    }

    return minValue;
}

template<typename T>
T getMaxValue(T arr[], int size)
{
    T maxValue = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (maxValue < arr[i]) {
            maxValue = arr[i];
        }
    }

    return maxValue;
}

int main()
{
    cout << getMinValue(arrInt, SIZE) << endl;
    cout << getMaxValue(arrInt, SIZE) << endl;

    cout << getMinValue(arrDouble, SIZE) << endl;
    cout << getMaxValue(arrDouble, SIZE) << endl;

    return 0;
}
