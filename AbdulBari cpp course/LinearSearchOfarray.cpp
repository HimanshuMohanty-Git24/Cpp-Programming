#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many number do you want to enter:";
    cin>>n;
    int i,key,a[n];
    cout<<"Enter Numbers:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter they Key";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<"Key found at:Index no. "<<++i;
            return 0;
        }
    }
    cout<<"Not found the key you entered";
    return 0;
}
