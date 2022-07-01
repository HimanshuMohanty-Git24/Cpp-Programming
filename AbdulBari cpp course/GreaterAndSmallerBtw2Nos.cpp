#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"Enter two number(X,Y):";
    cin>>x>>y;
    if(x>y)
        cout<<" "<<x<<" is Greater than "<<y;
    else
        cout<<" "<<y<<" is Greater than "<<x;
    return 0;
}
