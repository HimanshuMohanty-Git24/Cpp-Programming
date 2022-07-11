#include <iostream>

using namespace std;

float add(float x,float y)
{
    float z;
    z=x+y;
    return z;
}


int main()
{
    
    float x,y,z;
    cout<<"Enter two number:";
    cin>>x>>y;
    z=add(x,y);
    cout<<"The sum of two numbers is:"<<z<<endl;

    return 0;
}
