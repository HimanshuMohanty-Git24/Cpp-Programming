/*Below conditions are used to check that year is a leap year or not.
-->Year must be divisible by 4
-->Year is divisible by 400 and not divisible by 100.*/
#include <iostream>

using namespace std ;

int main()
{
    int year;

    cout<<"\n Enter the year:";
    cin>>year;

    if(year%400 == 0)
        cout<<"\nThis is a leap year";
    else if (year%100 == 0)
        cout<<"\nThis is not a leap year";
    else if(year%4 == 0)
        cout<<"\nThis is a leap year";
    else
        cout<<"This is not a leap year";
    
    return 0;
}



