//Perfect Num cal:
//If the sum of factors of the num= double the number then it is perfect num.
#include <iostream>

using namespace std;

int main()
{
    int i,num,sum=0,multi;
    cout<<"Enter the number to find factor:";
    cin>>num;
    cout<<endl;
    cout<<"The factors of "<<num<<" are:"<<endl;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<"\t";
            sum +=i;
        }
    }
    cout<<"The Sum of factors is:"<<sum<<endl;
    multi = 2*num;
    if(multi == sum)
    {
        cout<<num<<" is a perfect number";
    }
    else
        cout<<num<<" is not a perfect  number!";
    return 0;
}

