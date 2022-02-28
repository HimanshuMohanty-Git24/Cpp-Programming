#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c,d,e,f,g,h,i,j;
    cout<<"\nEnter the sides of the triangle:";
    cin>>a>>b>>c;
    d = a*a;
    e = b*b;
    f = c*c;
    g = d+e;
    h = d+f;
    i = e+f;
    j = d == i || e == h||f==g;
    cout<<"\nThis is a right angled triangle if it shows 1 & not if shows 0:"<<j;
    
    return 0;
}
