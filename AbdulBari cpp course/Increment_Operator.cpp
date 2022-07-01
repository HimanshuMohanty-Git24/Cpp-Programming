#include <iostream>
//Increment Operator
using namespace std;

int main()
{
    int i=5,a=10,x;
    x=i++ + --a;
    cout<<a<<" "<<i<<" "<<x;

    return 0;
}