#include <iostream>

using namespace std;

int main()
{
    int n,sn;
    cout<<"\tSum of N natural number"<<endl;
    cout<<"\t-----------------------"<<endl;
    
    cout<<"Enter the value of N(max range of the number):";
    cin>>n;
    //formula
    sn=(n*(n+1))/2;
    cout<<endl;
    cout<<"The sum of first "<<n<<" natural number is "<<sn<<endl;
    
    return 0;
}