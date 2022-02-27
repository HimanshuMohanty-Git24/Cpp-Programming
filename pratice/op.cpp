#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    float num1,num2,add,sub,multiply;
    float divide;
    int module;

    cout<<"\nEnter 2 number(First number>Second Number): ";
    cin>>num1>>num2;
    add = num1+num2;
    sub = num1-num2;
    multiply = num1*num2;
    divide = num1/num2;
    module = (int)num1%(int)num2;
    cout<<"Addition of 2 number:"<<add
    <<"\nSubtraction of 2 number:"<<sub
    <<"\nMultiplication of 2 number:"<<multiply
    <<setprecision(2)<<"\nDivision of 2 number:"<<divide
    <<"\nModulus of 2 numbers:"<<module;
    return 0;
}
