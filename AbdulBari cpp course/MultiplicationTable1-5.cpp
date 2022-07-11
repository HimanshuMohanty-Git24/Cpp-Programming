#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int arr[5][5];
    int i,j;
    cout<<" MULTIPLICATION TABLE\n\n";
    cout<<" ";
    for(j = 1; j <= 5 ; j++){
        cout<<std::setw(4)<<j;
    }
    cout<<"\n";
    cout<<"-------------------------\n";
    for(i=0;i<5;i++)
    {
        cout<<std::setw(2)<<(i+1)<<" |";
        for(j=0;j<5;j++)
        {
            arr[i][j]=(i+1)*(j+1);
            cout<<std::setw(4)<<arr[i][j];
        }
    cout<<endl;
    }

    return 0;
}


