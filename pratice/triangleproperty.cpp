#include <iostream>

using namespace std;

int main()
{
    int a,b,c,t;
    cout<<"\nGive the value of side A: ";
    cin>>a;
    cout<<"\nGive the value of side B: ";
    cin>>b;
    cout<<"\nGive the value of side c: ";
    cin>>c;

    t = (a + b>c) && (b+c>a) && (c + a> b);
    
    cout<<"\nDo they satisfy triangle property? 1 for yes, 0 for No : "<<t<<"\n";

    return 0;
}
