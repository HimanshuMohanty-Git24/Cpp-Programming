//Count number of negative and positive numbers in Array
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
   int pos=0,neg=0;
   for(i=0;i<n;i++)
   {
       if(a[i]<0)
       {
           neg++;
       }
       else pos++;
   }
   std::cout <<"Number of positive integer:"<< pos <<" Number of negative integer:"<<neg<< std::endl;
    return 0;
}


