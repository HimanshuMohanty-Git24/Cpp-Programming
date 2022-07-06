#include <iostream>

using namespace std;

int main()
{
    int a[8]={5,6,8,9,7,3,2,1},sum=0,i;
    for(i=0;i<7;i++)
    {
        sum=sum+a[i];
        cout<<sum<<" ";
    }
    cout<<endl;
std::cout << sum << std::endl;
    return 0;
}
