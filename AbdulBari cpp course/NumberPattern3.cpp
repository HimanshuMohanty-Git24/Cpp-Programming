#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            if(i>=j)
            {
            cout<<j;
            }
        }
    cout<<endl;
    }

    return 0;
}

