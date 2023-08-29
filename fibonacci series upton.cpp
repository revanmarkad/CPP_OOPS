#include<iostream>
using namespace std;

int main()
{
    int frist_num=0, second_num=1,third_num,i,num;

    cout<<"Enter random number to print Fibonacci series : ";
    cin>>num;
    cout<<"fibonacci series for a given number :" <<endl;
    cout<<frist_num<<endl;
    cout<<second_num<<endl;

    for(i=2; i<num; ++i)
    {

        third_num = frist_num + second_num;
        cout<<third_num<<endl;
        frist_num=  second_num;
        second_num=third_num;
    }
    return 0;
}
