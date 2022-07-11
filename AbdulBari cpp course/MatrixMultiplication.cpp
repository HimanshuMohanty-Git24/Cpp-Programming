#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"\t\t\tMatrix Multiplication"<<endl;
    cout<<"\t\t\t---------------------"<<endl;
    int i,j,k,r1,c1,r2,c2,sum=0;
    std::cout << "Enter the rows and column of the first matrix:";
    cin>>r1>>c1;
    std::cout << "Enter the rows and column of the second matrix:";
    cin>>r2>>c2;
    int a[r1][c1],b[r2][c2],multi[r1][c2];
    while(c1!=r2)
    {
        cout<<"\t!!Wrong input(column of first matrix not equal to row of second)!!\nEnter the values again:\n";
        std::cout << "Enter the rows and column of the first matrix:";
        cin>>r1>>c1;
        std::cout << "Enter the rows and column of the second matrix:";
        cin>>r2>>c2;
    }
    cout<<endl;
    cout<<"Enter the elements of the "<<r1<<"x"<<c1<<" matrix"<<endl;
    cout<<"------------------------------------------------"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"Enter element Matrix["<<(i+1)<<"]"<<"["<<(j+1)<<"]:";
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"Enter the elements of the "<<r2<<"x"<<c2<<" matrix"<<endl;
    cout<<"------------------------------------------------"<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"Enter element Matrix["<<(i+1)<<"]"<<"["<<(j+1)<<"]:";
            cin>>b[i][j];
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum =0;
            for(k=0;k<c1;k++)
            {
               sum =sum+(a[i][k]*b[k][j]); 
            }
            multi[i][j]=sum;
        }
    }
    cout<<endl;
    cout<<"Resultant matrix after matrix multiplication:"<<endl;
    cout<<"---------------------------------------------"<<endl;
    for(i=0;i<r1;i++)
    {
        cout<<"|";
        for(j=0;j<c2;j++)
        {
            cout<<multi[i][j]<<" ";
        }
        cout<<"|";
    cout<<endl;
    }
    
    return 0;
}
/*here k acts as the 
Assume k is just a number position.
K is common because it means 
(1st row A element)×(1st colum B element)
(2nd row A element)×(2nd column B element)
(3rd row A element)×(3rd column B element)
