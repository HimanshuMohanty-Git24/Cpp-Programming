#include <iostream>
#include <cmath>
using namespace std;
int Total(int x[], int n)
{
    int total = 0;
    for (int i = 1; i <= n; i++)
    {
        total = total + pow(x[i], 2);
    }
    return total;
}
void input(int x[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
}

void Display(int x[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "[x" << i << "]=" << x[i];
        cout << endl;
    }
}

int main()
{
    int i, result, n;
    std::cout << "Enter the upper limit of the function:";
    std::cin >> n;
    int x[n];
    cout << "Enter the elements:";
    input(x, n);
    cout << endl;
    cout << "The elements are:";
    cout << endl;
    Display(x, n);
    // for(i=1;i<=n;i++)
    // {
    //     cout<<"[x"<<i<<"]="<<x[i];
    //     cout<<endl;
    // }
    cout << "Output after putting the values in the function is:";
    result = Total(x, n);
    cout << result;
    return 0;
}
