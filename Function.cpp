#include "rect.hpp"
#include <iostream>

Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}

Rectangle::Rectangle(int x, int y)
{
    setLength(x);
    setWidth(y);
}

void Rectangle::setLength(int lengthOfRect)
{
    length = lengthOfRect;
}

void Rectangle::setWidth(int widthOfRect)
{
    width = widthOfRect;
}

void Rectangle::RotateRectanlge()
{
    length = width;
    width = length;
}

void Rectangle::draw()
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int Rectangle::getLength() const
{
    return length;
}

int Rectangle::getWidth() const
{
    return width;
}

int Rectangle::getArea() const
{
    return length * width;
}
