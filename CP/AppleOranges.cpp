#include <iostream>

using namespace std;

int main()
{
    int s, t;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    int m, n;
    cin >> m >> n;
    int ctrorange = 0, ctrapple = 0;
    int disapple[m], disorange[n];
    for (int i = 0; i < m; i++)
    {
        cin >> disapple[i];
        disapple[i] = disapple[i] + a;
        if (disapple[i] >= s && disapple[i] <= t)
        {
            ctrapple++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cin >> disorange[i];
        disorange[i] = disorange[i] + b;
        if (disorange[i] >= s && disorange[i] <= t)
        {
            ctrorange++;
        }
    }
    cout << ctrapple << endl
         << ctrorange;
    return 0;
}
