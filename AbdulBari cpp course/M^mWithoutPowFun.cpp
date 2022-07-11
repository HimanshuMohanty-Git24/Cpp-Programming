#include <iostream>
#include<cmath>
using namespace std;

int power(int x,int y)
{
    int z;
    z=pow(x,y);
    return z;
}


int main()
{
    cout<<"\t\tm(Base) to the power n(Exponent) calculator"<<endl<<endl;
    int m,n,p;
    cout<<"Enter the value of Base(m):";
    cin>>m;
    cout<<"Enter the value of Exponent(n):";
    cin>>n;
    p=power(m,n);
    cout<<"m to the power n is:"<<p<<endl;

    return 0;
}

