#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float divisor, divident, quotient, remainder;

    cout<<"\nEnetr the Divisor and Divident:";
    cin>>divisor>>divident;

    quotient =divident/divisor;
    remainder = (int)divident%(int)divisor;

    cout<<"\nThe quotient is:"<<quotient<<"\nThe remainder is:"<<remainder;
    return 0;
}
