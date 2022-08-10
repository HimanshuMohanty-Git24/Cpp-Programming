#include <bits/stdc++.h>
typedef long long lld;
using namespace std;

int main()
{
    lld min, max;
    lld arr[5];
    lld allsum = 0;
    lld res[5];
    lld MN = LLONG_MAX, MX = LLONG_MIN;

    for (int i = 0; i < 5; i++)
    {
        scanf("%lld", &arr[i]);
        allsum += arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        res[i] = allsum - arr[i];
    }
    max = min = res[0];
    for (int j = 0; j < 5; j++)
    {
        if (res[j] > max)
        {
            max = res[j];
        }
        else if (res[j] < min)
        {
            min = res[j];
        }
    }
    cout << min << " " << max;
}
