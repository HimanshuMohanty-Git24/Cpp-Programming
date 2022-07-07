#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(i<j)         //if i is smaller than j print * if i is greater than print " "space
            {
            cout<<"*";
            }
            else cout<<" ";
        }
    cout<<endl;
    }

    return 0;
}


