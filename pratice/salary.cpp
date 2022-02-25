#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float bp,da,hra,gpay;
    cout<<"\nEnter your Basic salary : ";
    cin>>bp;

    da = 0.4*bp;
    hra = 0.2*bp;
    gpay = da + hra + bp;

    cout<<"\nYour basic salary is :"<<bp;
    cout<<"\nYour dearness allowance is :"<<da;
    cout<<"\nYour home rent allowance is :"<<hra;
    cout<<"\nYour Gross pay is : "<<gpay;

    return 0;
}
