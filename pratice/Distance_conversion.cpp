#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float km,m,feet,in,cm,mm,mi,nmi;
    cout<<"\nEnter your distance in kilometers:";
    cin>>km;

    m = km*1000;
    feet = km*3280.839;
    in = km*39370.078;
    cm = km*100000;
    mm = km*1000000;
    mi = km*0.621;
    nmi = km*0.539;

    cout<<"\nDistance in meters ="<<m<<" m\n";
    cout<<"\nDistance in  feet ="<<feet<<" ft\n";
    cout<<"\nDistance in inch ="<<in<<" in\n";
    cout<<"\nDistance in centimeter ="<<cm<<" cm\n";
    cout<<"\nDistance in milimeter ="<<mm<<" mm\n";
    cout<<"\nDistance in mile ="<<mi<<" mi\n";
    cout<<"\nDistance in nautical mile ="<<nmi<<" nmi\n\n";


    return 0;
}
