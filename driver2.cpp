#include "Function2.hpp"

void Employee::setName(std::string nameOfEmp)
{
    Name = nameOfEmp;
}

void Employee::setSalary(int salaryOfEmp)
{
    Salary = salaryOfEmp;
}

void Employee::setHours(int hours)
{
    NoOfHours = hours;
}

std::string Employee:: getName()
{
    return Name;
}

int Employee::getSalary()
{
    return Salary;
}

int Employee::getHours()
{
    return NoOfHours;
}

void Employee::AddWork()
{
    if(getHours() > 6)
    {
        Salary = Salary + 500;
    }
}

void Employee::AddSalary()
{
    if(getSalary() > 50000)
    {
        Salary = Salary + 1000;
    }
}

Employee::Employee()
{
    Name = "\0";
    Salary = 0;
    NoOfHours = 0;
}

Employee::Employee(std::string EmpName, int empSal, int empHrs)
{
    setName(EmpName);
    setSalary(empSal);
    setHours(empHrs);
}