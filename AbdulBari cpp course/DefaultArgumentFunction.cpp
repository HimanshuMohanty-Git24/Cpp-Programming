#include <iostream>

using namespace std;

float add(float x=0,float y=0,float z=0)
{
    float r;
    r=x+y+z;
    return r;
}


int main()
{
    float x,y,z,r;
    r=add(5,6);
    cout<<"The sum of two numbers is:"<<r<<endl;
    r=add(1,15,2);
    cout<<"The sum of two numbers is:"<<r<<endl;
    return 0;
}

