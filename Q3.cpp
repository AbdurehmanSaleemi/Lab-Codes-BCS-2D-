#include "driver3.cpp"
#include <iostream>

int main()
{
    Array arrClass;
    int arr[10] = {0};

    for (int i = 0; i < 10; i++)
    {
        std::cin >> arr[i];
        arrClass.setArr(arr, i);
    }
    arrClass.printArr();
    std::cout << std::endl;

    int X[10];

    for (int i = 0; i < 10; i++)
    {
        std::cin >> X[i];
    }
    Array arrPara(X);
    arrPara.printArr();


    
}