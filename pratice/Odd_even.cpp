//This process is to do the operation without if else 
// #include<iostream>

// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int num, check;
//     cout<<"\nEnter a number to check for even/odd:";
//     cin>>num;

//     check = num%2;

//     cout<<"\nIf output is 0 then it is even if Output is not zero then is is odd:"<<check;
//     return 0;
// }

//With if else
// #include<iostream>

// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"\nEnter an integer:";
//     cin>>n;

//     if (n%2 == 0)
//         cout<<n<<" is even.";
//     else
//         cout<<n<<" is odd.";

//     return 0;
// }

//With ternary operator:
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    (n%2 == 0)?cout<<n<<" is even.":cout<<n<<" is odd.";

    return 0;
}

