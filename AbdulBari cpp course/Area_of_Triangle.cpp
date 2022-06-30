#include <iostream>

using namespace std;

int main()
{
    float base,height,area;
    string unit;
    cout<<"\tArea Of a Triangle Calculator"<<endl;
    cout<<"\t------------------------------"<<endl;
    
    cout<<"Enter the Unit of dimension:";
    getline(cin,unit);
    cout<<endl;
    
    cout<<"Enter the dimension of Height of triangle:";
    cin>>base;
     cout<<endl;
    cout<<"Enter the dimension of base of triangle:";
    cin>>height;
     cout<<endl;
    
    area=(base*height)/2;
    
    cout<<"The area of the triangle is:"<<area<<"square "<<unit<<endl;
    

    return 0;
}
