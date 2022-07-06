#include <iostream>

using namespace std;

int main()
{  
    int n;
    cout<<"How many number do you want to enter:";
    cin>>n;
    int i,a[n];
    cout<<"Enter Numbers:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int min;
   min=a[0];
   for(i=0;i<9;i++)
   {
       if(a[i]<min)
       {
           min = a[i];
       }
   }
   std::cout <<"min Num is:"<< min << std::endl;
    return 0;
}

