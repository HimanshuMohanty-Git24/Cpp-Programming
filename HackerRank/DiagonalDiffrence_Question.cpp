#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    //primary diagonal ele sum:
    int pDsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i == j)
            {
                pDsum = pDsum+arr[i][j];
            }
        }
    }
    //secondary diagonal ele sum:
    int sDsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)==(n-1))
            {
                sDsum = sDsum+arr[i][j];
            }
        }
    }
    int result = pDsum - sDsum;
    if(result<0)
    {
        result=-(result);
    }
    cout<<result;
    return 0;
}
