#include <iostream>
#include <string>
using namespace std;

class student
{
private:
    int rollno;
    string name;
    float fees;

public:
    void get()
    {

        cout << "Enter Fees:";
        cin >> fees;
    }

    void put()
    {
        cout << "Student Roll Number:" << rollno << endl;
        cout << "Student Name:" << name << endl;
        cout << "Student Fees:" << fees << endl;
    }
};
        cout << "Enter Roll Number:";
        cin >> rollno;

        cout << "Enter Name:";
        cin >> name;

int main()
{
    student ans; // classname && object

    cout << "Enter Student Details: " << endl;
    ans.get();

    cout << "\nStudent Details:" << endl;
    ans.put();

    return 0;
}
