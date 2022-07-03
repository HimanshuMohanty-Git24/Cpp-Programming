//Program to Find factorial of a number:
#include <iostream>

using namespace std;

int main()
{
    int i,n,fract=1;
    cout<<"Factorial(n!) of a number(Product of N natural number)enter N:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fract *=i;//fract = fract*i;
    }
    cout<<"The factorial(n!) of "<<n<<":"<<fract;

    return 0;
}
