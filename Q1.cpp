#include "Function.cpp"
#include <iostream>

int main()
{
    int length;
    int width;
    Rectangle rec[4];

    for (int i = 0; i < 4; i++)
    {
        std::cout << "Enter length of Rectangle " << i << " : ";
        std::cin >> length;
        std::cout << "Enter width of Rectangle " << i << " : ";
        std::cin >> width;

        rec[i].setLength(length);
        rec[i].setWidth(width);
    }

    bool isRunning = true;
    int userChoice;

    int indexOfRect;

    while(isRunning)
    {
        std::cout << "Which Rectangle you want to use\n";
        std::cout << "Enter index = ";
        std::cin >> indexOfRect;
        startOfMenu:
        std::cout << "1. Area of Length\n";
        std::cout << "2. Rotate Rectangle\n";
        std::cout << "3. Draw Rectangle\n";
        std::cout << "4. Exit\n";
        std::cout << "-------------------\n";
        std::cin >> userChoice;

        if(userChoice == 1)
        {
            std::cout << "Area = " << rec[indexOfRect].getArea() << std::endl;
            goto startOfMenu;
        }
        else if(userChoice == 2)
        {
            rec[indexOfRect].RotateRectanlge();
            goto startOfMenu;
        }
        else if (userChoice == 3)
        {
            rec[indexOfRect].draw();
            goto startOfMenu;
        }
        else if (userChoice == 4)
        {
            isRunning = false;
        }

    }

    std::cout << "Parameterized Constrctor" << std::endl;
    std::cout << "Enter length of Rectangle : ";
    std::cin >> length;
    std::cout << "Enter width of Rectangle : ";
    std::cin >> width;
    Rectangle rec5(length, width);
    std::cout << "Area = " << rec5.getArea() << std::endl;
}