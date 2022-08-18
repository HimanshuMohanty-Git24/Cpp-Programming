// Group(count) numbers according to the range
#include <iostream>
using namespace std;
void group(int x[], int counter[]);
int main()
{
    int i;
    int x[50] = {43, 65, 51, 27, 79, 11, 56, 61, 82, 9, 25, 36, 7, 49, 55, 63, 74, 81, 49, 37,
                 40, 49, 16, 75, 87, 91, 33, 24, 58, 78, 65, 56, 76, 67, 45, 54, 36, 63, 12, 21,
                 73, 49, 51, 19, 39, 49, 63, 93, 85, 59};
    int counter[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    group(x, counter);

    cout << "Number of student in 0-9 group:" << counter[0] << endl;
    cout << "Number of student in 10-19 group:" << counter[1] << endl;
    cout << "Number of student in 20-29 group:" << counter[2] << endl;
    cout << "Number of student in 30-39 group:" << counter[3] << endl;
    cout << "Number of student in 40-59 group:" << counter[4] << endl;
    cout << "Number of student in 50-59 group:" << counter[5] << endl;
    cout << "Number of student in 60-69 group:" << counter[6] << endl;
    cout << "Number of student in 70-79 group:" << counter[7] << endl;
    cout << "Number of student in 80-89 group:" << counter[8] << endl;
    cout << "Number of student in 90-99 group:" << counter[9] << endl;
    cout << "Number of student in 100-100 group:" << counter[10] << endl;

    return 0;
}
void group(int x[], int counter[])
{
    for (int i = 0; i < 50; i++)
    {
        if (x[i] <= 9)
        {
            counter[0]++;
        }
        else if (x[i] <= 19)
        {
            counter[1]++;
        }
        else if (x[i] <= 29)
        {
            counter[2]++;
        }
        else if (x[i] <= 39)
        {
            counter[3]++;
        }
        else if (x[i] <= 49)
        {
            counter[4]++;
        }
        else if (x[i] <= 59)
        {
            counter[5]++;
        }
        else if (x[i] <= 69)
        {
            counter[6]++;
        }
        else if (x[i] <= 79)
        {
            counter[7]++;
        }
        else if (x[i] <= 89)
        {
            counter[8]++;
        }
        else if (x[i] <= 99)
        {
            counter[9]++;
        }
        else
        {
            counter[10]++;
        }
    }
}
