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
    float Texp,Tdisexp,dis;
    cout<<"Enter the total expense of your shopping:";
    cin>>Texp;
    cout<<endl;
    if(Texp>2000)
    {
        dis=(Texp*25)/100;
        Tdisexp = Texp-dis;
        cout<<"Your expense after 25\%' discount is:"<<Tdisexp;
    }
    else if(Texp>=800 && Texp<=2000)
    {
        dis=(Texp*10)/100;
        Tdisexp = Texp-dis;
        cout<<"Your expense after 10\% discount is:"<<Tdisexp;
    }
    else
    {
        cout<<"You are not eligible for any discount";
    }
    cout<<endl;
    cout<<"Thank you for shopping";
    return 0;
}