#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float fr,centigrade;
    cout<<"\nEnter the temp(Fahrenheit):";
    cin>>fr;
    centigrade = (fr-32)*5/9;
    cout<<"\nThe temp in centigrage is:"<<centigrade<<" C";

    return 0;
}

