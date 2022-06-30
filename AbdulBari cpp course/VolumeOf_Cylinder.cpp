#include <iostream>
#include<cmath>
#define pi 3.141592
using namespace std;

int main()
{
    int Rad,Height,Vol;
    cout<<"\tVolume of a cylinder calculator"<<endl;
    cout<<"\t-------------------------------"<<endl;
    
    cout<<"Enter the Radius of the cylinder(in meter):";
    cin>>Rad;
    cout<<endl;
    cout<<"Enter the Height of the cylinder(in meter):";
    cin>>Height;
    
    Vol=pi*(pow(Rad,2))*Height;
    cout<<endl;
    cout<<"The Volume of Cylinder is:"<<Vol<<"cubic meter";

    return 0;
}