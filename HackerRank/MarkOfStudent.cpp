#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"enter the number of student:";
    cin>>n;
    int arr[n][5];
    int marks[n];
    int base_mark=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = 0; j < 5; j++)
        {
            sum=sum+arr[i][j];
            
        }
        marks[i]=sum;
    }
    int counter=0;
    for (int i = 0; i < (n-1); i++)
    {
        if(marks[0]<marks[i+1])
        {
            counter++;
        }
    }
    cout<<counter;
    
    
    
    return 0;
}
