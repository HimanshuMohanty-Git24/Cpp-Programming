//car prefrence in city
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<"\t\t\tCodes representing the following information:"<<endl;
    cout<<"\t\t\t---------------------------------------------"<<endl;
    std::cout <<"\t\t\tM-Madras\t\t\t"<<"1-Ambassador"<< std::endl;
    std::cout <<"\t\t\tD-Delhi\t\t\t"<<"\t2-Fiat"<< std::endl;
    std::cout <<"\t\t\tC-Calcutta\t\t\t"<<"3-Dolphin"<< std::endl;
    std::cout <<"\t\t\tB-Bombay\t\t\t"<<"4-Maruti"<< std::endl;
    cout<<endl;
    int i,j,car;
    int freq[5][5]={0,0,0,0,0};
    char city;
    cout<<"For,each person enter the city code\n";
    cout<<"followed by the car code.\n";
    cout<<"Enter the letter X to indicate en.\n";
    for(i=1;i<100;i++)
    {
        cin>>city;
        if(city == 'X')
            break;
        cin>>car;
        switch(city)
        {
            case 'B' : freq[1][car]++;
                        break;
            case 'C' : freq[2][car]++;
                        break;
            case 'D' : freq[3][car]++;
                        break;
            case 'M' : freq[4][car]++;
                        break;
        }
    }
    cout<<endl<<endl;
    cout<<"\t\tPopularity Table"<<endl<<endl;
    cout<<"-----------------------------------------------------\n";
    cout<<"City    Ambassador  Fiat  Dolphine  Maruti\n";
    cout<<"-----------------------------------------------------\n";
    for(i=1;i<=4;i++)
    {
        switch(i)
        {
            case 1 : cout<<"Bombay   ";
                break ;
            case 2 : cout<<"Calcutta ";
                break ;
            case 3 : cout<<"Delhi    ";
                break ;
            case 4 : cout<<"Madras   ";
                break ;
        }
        for(j=1;j<=4;j++)
            cout<<setw(7)<<freq[i][j];
         cout<<endl;
    }
    cout<<"-----------------------------------------------------\n";
    

    return 0;
}