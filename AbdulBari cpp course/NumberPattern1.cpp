#include <iostream>

using namespace std;

int main()
{
    int count=0,i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<++count<<"\t";
        }
    cout<<endl;
    }

    return 0;
}
