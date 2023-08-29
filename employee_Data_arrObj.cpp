
//TITLE-WAP in C++ to create a class called as employee. Data members are eid, sal& name of the employee.Scan the data for 10 such employees & display the same by using array of objects.

#include <iostream>
#include <string>
using namespace std;


class Employee
{
public:
    int eid;
    double sal;
    string name;

    void get()
    {
        cout << "Enter employee ID: ";
        cin >> eid;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee salary: ";
        cin >> sal;
    }

    void put()
    {
        cout << "Employee ID: " << eid << "\n";
        cout << "Employee Name: " << name << "\n";
        cout << "Employee Salary: " << sal << "\n";
    }
};

int main()
{
    int numEmployees = 3;
    Employee employees[numEmployees];
    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Enter details for employee " << i + 1 << ":\n";
        employees[i].get();
    }

    cout << "\nDisplaying employee information:\n";
    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Employee " << i + 1 << ":\n";
        employees[i].put();
        cout << "-------------------------\n";

    }

    return 0;
}
