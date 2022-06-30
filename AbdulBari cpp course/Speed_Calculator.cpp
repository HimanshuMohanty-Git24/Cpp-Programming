#include <iostream>

using namespace std;

int main()
{
    int dis,tim,speed;
    cout<<"\tSpeed Calculator"<<endl;
    cout<<"\t----------------"<<endl;
    
    cout<<"Enter the distance covered(in meters):";
    cin>>dis;
    cout<<endl;
    cout<<"Enter the time taken(in seconds):";
    cin>>tim;
    
    speed=(dis/tim);
    
    cout<<endl;
    
    cout<<"The speed of the object was:"<<speed<<"metres per second"<<endl;

    return 0;
}