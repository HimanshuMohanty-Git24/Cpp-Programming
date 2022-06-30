#include <iostream>

using namespace std;

int main()
{
    float p,r,t,si,Tamount;
    cout<<"\tSimple Intrest Calculator:"<<endl;
    cout<<"\t--------------------------"<<endl;
    cout<<"Enter the principle amount(in rupees):";
    cin>>p;
    cout<<endl;
    cout<<"Enter the Rate(in '%'):";
    cin>>r;
    cout<<endl;
    cout<<"Enter the time(In years):";
    cin>>t;
    cout<<endl;
    
    si=(p*r*t)/100;
    Tamount=(p+si);
    cout<<"The Simple Intrest is:"<<si<<"Rupees"<<endl;
   
    cout<<"The total Amount earned by the beneficiary:"<<Tamount<<"Rupees";
     cout<<endl;

    return 0;
}