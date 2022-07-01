#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char x = 127;
    cout << "Value initialised to x = " << (int)x << endl; // Displaying the int value of char x
    cout << endl;
    char y = 128;
    cout << "As we keep char y to 128 we are expecting -128 and what we get is : " << (int)y << endl;
    cout << endl;
    cout << "Trying to do value overflow on x now : " << endl;
    cout << endl;
    cout << "\t\tValue before Overflow : " << (int)x << endl;
    cout << endl;
    x++;
    cout << "\t\tValue after increment when we are expecting it to get overflown and be -128 is : " << (int)x << endl;
    int a = INT32_MAX; // Maximum integer in a 32-bit system
    int b = INT32_MIN; // Minimum integer in a 32-bit system
    cout << "Maximum integer in a 32-bit system a = " << a << endl;
    cout << "Minimum integer in a 32-bit system b = " << b << endl;
    a++;
    cout << "Value of a after post increment = " << a << endl;

    return 0;
}