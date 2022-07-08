//Dynamic Menory allocation
#include <iostream>

using namespace std;

int main()
{
    int size,i;
    cout<<"Enter number of elements:";
    cin>>size;
    int *p=new int[size];
    cout<<"Enter the elements:";
    for(i=0;i<size;i++)
    {
        cin>>p[i];
    }
    cout<<"Entered elements are:";
    for(i=0;i<size;i++)
    {
        cout<<p[i]<<endl;
    }
    delete []p; 
    cout<<"Enter number of elements:";
    cin>>size;
    p=new int[size];
    cout<<"Enter the elements:";
    for(i=0;i<size;i++)
    {
        cin>>p[i];
    }
    cout<<"Entered elements are:";
    for(i=0;i<size;i++)
    {
        cout<<p[i]<<endl;
    }
    delete []p;
    p = nullptr;
    cout<<endl;
    cout<<sizeof p;//size of int*
    return 0;
}

//NOT Dynamic memory allocation
// #include <iostream>

// using namespace std;

// int main()
// {
//     int size;
//     cout<<"Enter number of elements:";
//     cin>>size;
//     int A[size];//array is created inside stack memory
//     cout<<sizeof A<<endl;
    
//     // cout<<"Enter number of elements:";
//     // cin>>size;
//     // cout<<sizeof A<<endl; //here the size of A doesn't change 
//                             //so we are not able tro change the memory allocation
//     return 0;
// }