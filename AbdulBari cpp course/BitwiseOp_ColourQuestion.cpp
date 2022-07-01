#include <iostream>
#define _BV(x) (1 << x)
using namespace std;
void showbits(unsigned char n);
int main()
{
    unsigned char color, i;
    int c;
    char *rbcolors[]= {"Violet", "Indigo", "Blue", "Green", "Yellow", "Orange", "Red"};
    cout<<"Enter any number:";
    cin>>c;
    color = (unsigned char) c;
    cout<<"Colors represented are:\n";
    for(i=0;i<=6;i++)
    {
        if((color &_BV(i)) == _BV(i))
            cout<<" "<<rbcolors[i];
    }

    return 0;
}
