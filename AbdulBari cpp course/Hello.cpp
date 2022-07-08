#include <iostream>

using namespace std;

int main()
{
    string name;
    cout<<"May i know your name please:";
    getline(cin,name);
    cout<<endl;
    cout<<"Welcome Mr./Mrs."<<name<<endl;
    return 0;
}