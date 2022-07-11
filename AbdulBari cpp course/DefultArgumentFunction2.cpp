#include <iostream>

using namespace std;

int max(int a=0,int b=0,int c=0)
{
    return a>b && a>c ?a:(b>c?b:c);
}
int main()
{
    int x,y,z,r;
    r=max();
    cout<<"The max number is:"<<r<<endl;
    r=max(10);
    cout<<"The max number is:"<<r<<endl;
    r=max(10,13);
    cout<<"The max number is:"<<r<<endl;
    r=max(10,13,15);
    cout<<"The max number is:"<<r<<endl;
    return 0;
}

