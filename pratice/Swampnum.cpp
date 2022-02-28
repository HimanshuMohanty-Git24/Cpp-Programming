#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1,num2,swamp;
    cout<<"\nEnter two value for A & B respectively :";
    cin>>num1>>num2;

    swamp = num1;
    num1 = num2;
    num2 = swamp;

    cout<<"\nNow the value of A & B(After swamping) is:"<<num1<<","<<num2;
    return 0;
}

