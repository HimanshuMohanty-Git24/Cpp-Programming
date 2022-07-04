//Palindrome Number check:
//A palindromic number is a number that remains the same when its digits are reversed.
#include <iostream>
using namespace std;
int main()
{
    int n,r,rev=0,m;
    cout<<"Enter a no. ";
    cin>>n;
    m=n;
    cout<<"Reverse is:";
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<rev<<endl;
    if(rev == m)
    {
        cout<<"This is a palindromic number";
    }
    else
        cout<<"This number is not a palindromic number";
    return 0;
}

