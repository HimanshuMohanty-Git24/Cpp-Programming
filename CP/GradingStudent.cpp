#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int grade[n];
    int mul[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> grade[i];
        mul[i] = ((grade[i] / 5) * 5) + 5;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (grade[i] >= 38)
        {
            if (mul[i] - grade[i] < 3)
            {
                grade[i] = mul[i];
            }
        }
        cout << grade[i] << endl;
    }

    return 0;
}
