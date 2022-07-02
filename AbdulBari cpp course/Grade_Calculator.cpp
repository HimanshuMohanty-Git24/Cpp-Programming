/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int m1,m2,m3,avg;
    cout<<"Enter the mark of the student in 3 subject:";
    cin>>m1>>m2>>m3;
    avg=(m1+m2+m3)/3;
    if(avg>=60)
        cout<<"A grade";
    else if(avg>=35 && avg<=60)
        cout<<"B grade";
    else
        cout<<"You have failed !!!";

    return 0;
}