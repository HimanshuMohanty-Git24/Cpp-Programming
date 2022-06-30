#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,r1,r2;
    cout<<"\tRoots of Quadratic equation(ax2+bx+c=0)"<<endl;
    cout<<"\t---------------------------------------"<<endl;
    
    cout<<"Enter the coefficient a:";
    cin>>a;
    cout<<"Enter the coefficient b:";
    cin>>b;
    cout<<"Enter the coefficient c:";
    cin>>c;
    
    r1=(-b+(sqrt((pow(b,2))-(4*a*c))))/(2*a);
    r2=(-b-(sqrt((pow(b,2))-(4*a*c))))/(2*a);
    cout<<endl;
    
    cout<<"The Roots of the Quadratic equation are:"<<r1<<" & "<<r2<<endl;
    return 0;
}