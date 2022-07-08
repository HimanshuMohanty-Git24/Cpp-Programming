#include <iostream>

using namespace std;

int main()
{
    int A[2][3]={2,5,9,3,6,2},i,j;
    cout<<"Matrix A:";
    cout<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<A[i][j]<<" ";
        }
    cout<<endl;
    }
    

    return 0;
}