#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int x1,x2,y1,y2,Distance;
    cout<<"\t2D Distance Between Two Point Calculator"<<endl;
    cout<<"\t----------------------------------------"<<endl;
    
    cout<<"Enter the coordinates of first point(X1,Y1):";
    cin>>x1>>y1;
    cout<<"Enter the coordinates of first point(X2,Y2):";
    cin>>x2>>y2;
    
    Distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout<<endl;
    cout<<"The Distance between two points is:"<<Distance<<"Units"<<endl;

    return 0;
}