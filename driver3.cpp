#include "function3.hpp"
#include <iostream>

void Array::setArr(int inputArr[], int index)
{
    arr[index] = inputArr[index];
}

int Array::getArr(int index)
{
    return arr[index];
}

void Array::printArr()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << getArr(i) << " ";
    }
}

