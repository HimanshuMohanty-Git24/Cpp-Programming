#include <iostream>

using namespace std;

int main()
{
    int num,i,x;
    cout<<"Which multipilcation table do you want:";
    cin>>num;
    for(i=1;i<=10;i++)
    {
        x=i*num;
        cout<<num<<"x"<<i<<"="<<x<<endl;
    }

    return 0;
}
