/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Factor calculator:
#include <iostream>

using namespace std;

int main()
{
    int i,num;
    cout<<"Enter the number to find factor:";
    cin>>num;
    cout<<endl;
    cout<<"The factors of "<<num<<" are:"<<endl;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<"\t";
        }
        else
        continue;
    }

    return 0;
}
