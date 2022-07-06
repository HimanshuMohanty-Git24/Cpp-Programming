#include <iostream>

using namespace std;

int main()
{
   int i,max,a[9]={7,5,9,8,18,78,96,5,105};
   max=a[0];
   for(i=0;i<9;i++)
   {
       if(a[i]>max)
       {
           max = a[i];
       }
   }
   std::cout <<"Max Num is:"<< max << std::endl;
    return 0;
}
