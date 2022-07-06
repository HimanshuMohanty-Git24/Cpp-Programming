#include <iostream>

using namespace std;

int main()
{
    int a[]={3,5,8,4,7,6,5,8};
    for(auto x:a)
    {
        cout<<++x<<endl;
    }

    return 0;
}
