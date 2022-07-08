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
    int B[2][3]={1,6,9,8,4,7};
    cout<<"Matrix B:";
    cout<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<B[i][j]<<" ";
        }
    cout<<endl;
    }
    cout<<"Matric C = Matrix A + Matrix B";
    int C[2][3];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    cout<<"Matrix C:";
    cout<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
    cout<<endl;
    }

    return 0;
}