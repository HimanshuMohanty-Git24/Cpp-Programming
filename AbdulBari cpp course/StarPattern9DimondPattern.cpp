#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the n:";
    cin>>n;
    cout<<endl;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)>=(n-1))         
            {
            cout<<"*";
            }
            else cout<<" ";
        }
        for(j=1;j<6;j++)
        {
            if(i>=j)
            {
            cout<<"*";
            }
        }
    cout<<endl;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(i<j)         
            {
            cout<<"*";
            }
            else cout<<" ";
        }
        for(j=0;j<n-1;j++)
        {
            if((i+j)<=(n-1-1))         
            {
            cout<<"*";
            }
            else cout<<" ";
        }
    cout<<endl;
    }

    return 0;
}




