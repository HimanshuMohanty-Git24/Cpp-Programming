//Transpose of a matrix
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j,r,c;
    std::cout << "Enter the rows and column of the matrix:" << std::endl;
    cin>>r>>c;
    int matrix[r][c],Tmatrix[r][c];
    cout<<endl;
    cout<<"Enter the elements of the "<<r<<"x"<<c<<" matrix"<<endl;
    cout<<"------------------------------------------------"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Enter element Matrix["<<(i+1)<<"]"<<"["<<(j+1)<<"]:";
            cin>>matrix[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            Tmatrix[j][i]=matrix[i][j];
        }
    }
    cout<<endl;
    cout<<"Input matrix:"<<endl;
    for(i=0;i<r;i++)
    {
        cout<<"|";
        for(j=0;j<c;j++)
        {
            cout<<setw(2)<<matrix[i][j]<<setw(2);
        }
        cout<<"|";
    cout<<endl;
    }
    cout<<endl;
    cout<<"Transpose of the matrix:"<<endl;
    for(i=0;i<c;i++)
    {
        cout<<"|";
        for(j=0;j<r;j++)
        {
            cout<<setw(2)<<Tmatrix[i][j]<<setw(2);
        }
        cout<<"|";
    cout<<endl;
    }

    return 0;
}
