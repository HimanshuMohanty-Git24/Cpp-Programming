//Armstrong number is a number that is equal to the sum of cubes of its digits.
//For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
#include <iostream>
using namespace std;
int main()
{
    int n,r,sum=0,m;
    cout<<"Enter a no. ";
    cin>>n;
    m=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum = sum+(r*r*r);
    }
    cout<<endl;
    cout<<endl;
    if(m == sum)
    {
        cout<<m<<" is a armstrong number";
    }
    else
        cout<<m<<" is Not a armstrong number";
    return 0;
}
