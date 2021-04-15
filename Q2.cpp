#include <iostream>
#include <fstream>
#include "driver2.cpp"

int main()
{
    //Reading File
    std::ifstream dataRead;
    dataRead.open("Employee.txt");
    int totalObj;
    dataRead >> totalObj;

    std::string Name;
    int salary;
    int hours;

    //Creating Obj
    Employee emp[totalObj - 1];
    for (int i = 0; i < totalObj - 1; i++)
    {
        dataRead >> Name;
        emp[i].setName(Name);
        dataRead >> salary;
        emp[i].setSalary(salary);
        dataRead >> hours;
        emp[i].setHours(hours);
        emp[i].AddSalary();
        emp[i].AddWork();
    }

    for (int i = 0; i < 4; i++)
    {
        std::cout << emp[i].getName() << "       " << emp[i].getSalary() << "        " << emp[i].getHours() << std::endl;
    }

    dataRead >> Name;
    dataRead >> salary;
    dataRead >> hours;
    Employee emp5(Name, salary, hours);
    return 0;
}