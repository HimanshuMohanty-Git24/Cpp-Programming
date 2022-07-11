#include <iostream>

using namespace std;

int main()
{
    int num[10];
    int max=0,min,sum=0,avg,i;
    std::cout << "Enter the element:" << std::endl;
    for(i=0;i<10;i++)
    {
        cin>>num[i];
    }
    for(i=0;i<10;i++)
    {
        if(num[i]>=max){
            max=num[i];
        }
    }
    cout<<"Maximum between ten number is:"<<max<<endl;
    for(i=0;i<10;i++)
    {
        sum=sum+num[i];
    }
    avg=sum/10;
    cout<<"Average of ten number is:"<<avg<<endl;
    

    return 0;
}
