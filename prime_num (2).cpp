#include<iostream>
using namespace std;

int main()
{
    int n,i,c=0;


    cout<<"Enter a any number :" ;
    cin>>n;

    for(i=1; i<=n; i++)
    {


        if(n%i==0)
        {

            c++;
        }
    }


       if(c==2)
    {
        cout<<n <<"  is a prime number"<<endl;
    }
    else if(c>2)
    {
        cout<<n <<"  is a not prime number"<<endl;
    }
    else{
         cout<<"   Invalid input!!!! place inter a valid number"<<endl;
    }

    return 0;
}



