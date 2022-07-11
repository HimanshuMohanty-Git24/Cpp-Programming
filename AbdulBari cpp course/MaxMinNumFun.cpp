#include <iostream>

using namespace std;

int max(int a,int b,int c)
{
    if(a>b&&a>c)
        return a;
    else if(b>c)
        return b;
    else
        return c;
}

int min(int a,int b,int c)
{
    if(a<b&&a<c)
        return a;
    else if(b<c)
        return b;
    else
        return c;
}

int main()
{
    int x,y,z,r;
    cout<<"Enter three number:";
    cin>>x>>y>>z;
    r=max(x,y,z);
    cout<<"The max number is:"<<r<<endl;
    r=min(x,y,z);
    cout<<"The min number is:"<<r<<endl;
    return 0;
}
