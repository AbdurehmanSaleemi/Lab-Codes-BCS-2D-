#include <iostream>

class Employee
{
    private:
    std::string Name;
    int Salary;
    int NoOfHours;

    public:
    void setName(std::string nameOfEmp);
    void setSalary(int salaryOfEmp);
    void setHours(int hours);
    std::string getName();
    int getSalary();
    int getHours();

    void AddSalary();
    void AddWork();
    Employee();
    Employee(std::string EmpName, int empSal, int empHrs);
};