#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, max, min, ctr = 0;
    cin >> n;
    int ptr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ptr[i];
    }
    max = min = ptr[0];
    for (int j = 0; j < n; j++)
    {
        if (ptr[j] > max)
        {
            max = ptr[j];
        }
        else if (ptr[j] < min)
        {
            min = ptr[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] == max)
        {
            ctr++;
        }
    }
    cout << ctr;
    return 0;
}
