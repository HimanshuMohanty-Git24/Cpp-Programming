#include <iostream>

using namespace std;
//This a question from only one student
int main(int argc, char const *argv[])
{
    float m1,m2,m3,m4,m5,aggr;
    float per;
    cout<<"\nEnter your mark in five subjects(out of 100) :";
    cin>>m1>>m2>>m3>>m4>>m5;

    aggr = m1+m2+m3+m4+m5;
    per = aggr/5;

    cout<<"\nThe total of all the marks obtained out of 500 is:"<<aggr;
    cout<<"\nPercentage obtained:"<<per<<"\n";



    return 0;
}
