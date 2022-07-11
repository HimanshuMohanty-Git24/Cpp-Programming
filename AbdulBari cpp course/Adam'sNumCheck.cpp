// Adam number or not
#include <iostream>
using namespace std;
int main()
{
    int n,r,rev=0,nsq,rsq,rev_rsq=0;
    int str,str1;
    cout<<"Enter a no. ";
    cin>>n;
    str=n;
    cout<<"Reverse is:";
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<rev<<endl;
    nsq=(str*str);
    rsq=(rev*rev);
    cout<<nsq<<" "<<rsq<<endl;
    r=0;
    while(nsq!=0)
    {
        r=nsq%10;
        nsq=nsq/10;
        rev_rsq=rev_rsq*10+r;
    }
    if(rev_rsq==rsq)
    {
        cout<<"It's a adam number";
    }
    else
        cout<<"it's not a adam number";
        
    return 0;
}

