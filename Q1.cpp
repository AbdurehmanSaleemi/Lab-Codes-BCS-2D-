#include <iostream>
#include <cstring>

class Farm
{
    private:
    float Area;
    char* Crops;
    float* yield;
    int size;

    public:
    void init();
    Farm();
    void setArea(float a);
    void setCrops(char *c, int index);
    void setYield(float *y, int index);
    void setSize(int s);
    Farm(float, char*, float*, int);
    void increaseYield(int);
    Farm add(Farm);
    void removeCrop(char);
    void print();
};

void Farm::init()
{
    setArea(0);
    setCrops('\0', 0);
    setYield(0, 0);
    setSize(0);
}

Farm::Farm()
{
    init();
}

void Farm::setArea(float a)
{
    Area = a;
}

void Farm::setCrops(char *c, int index)
{
    for (int i = index; i < strlen(c); i++)
    {
        Crops[i] = c[i];
    }
}

void Farm::setYield(float *y, int index)
{
    
}
