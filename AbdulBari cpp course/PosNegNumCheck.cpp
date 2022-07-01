#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    if(x>=0)
        cout<<" "<<x<<" is positive";
    else
        cout<<" "<<x<<" is negative";
    return 0;
}