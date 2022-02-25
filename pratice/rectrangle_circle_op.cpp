#include <iostream>
#define pi 3.14

using namespace std;

int main(int argc, char const *argv[])
{
    int br,len,rad,a_rect,a_circ,p_rect,c_circ;
    cout<<"\nEnter the length and breadth of rectrangle:";
    cin>>br>>len;
    cout<<"\nEnter the radius of circle:";
    cin>>rad;

    a_rect=br*len;
    a_circ=pi*(rad*rad);
    p_rect=2*(br+len);
    c_circ=2*pi*rad;

    cout<<"\nArea of rectrangle:"<<a_rect<<"\nPerimeter of rectrangle:"<<p_rect;
    cout<<"\nArea of circle:"<<a_circ<<"\nCircumference of cicle:"<<c_circ;

    return 0;
}
