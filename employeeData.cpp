#include <iostream>
#include <string>

using namespace std;

class employee
{
private:
    string name;
    int id;
    int salary;

public:
    void get()
    {

        cout << "Enter Employee Name:";
        cin >> name;

        cout << "Enter Employee ID:";
        cin >> id;

        cout << "Enter Employee Salary";
        cin >> salary;
    }

    void put()
    {
        cout << "Employee Name is :" << name << endl;
        cout << "Employee Id Number is :" << id << endl;
        cout << "Employee salary is :" << salary << endl;
    }
};

int main()
{
    employee data;

    cout << "Enter Employee Details: " << endl;
    data.get();

    cout << "  Employee Details: " << endl;
    data.put();
}
