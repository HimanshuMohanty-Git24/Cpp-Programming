//Sum of N natural Number without the formula:
#include <iostream>

using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Sum of N natural number(Enter N):";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum +=i; //sum=sum+i;
    }
     cout<<"Sum of "<<n<<" Natural number is:"<<sum;
    return 0;
}
