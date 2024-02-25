#include <iostream>
#include "arrays.h"
using namespace std;

template<typename T>
void showArray(T arr[], int size)
{
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    showArray(arrInt, SIZE);
    cout << endl;
    showArray(arrDouble, SIZE);
}
