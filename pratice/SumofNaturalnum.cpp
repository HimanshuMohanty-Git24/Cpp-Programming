#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num,i;
    int sum=0;
    cout<<"\nEnter a positive integer for range to find the sum of all nums within it:";
    cin>>num;

    for (i = 0; i <= num; i++)
    {
        sum+=i;
    }

    cout<<"\nSum of first "<<num<<" natural number is:"<<sum;
    
    return 0;
}
