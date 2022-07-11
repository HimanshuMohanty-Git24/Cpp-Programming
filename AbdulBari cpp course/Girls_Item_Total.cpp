//i(rows)=girls,j(column)=item
#include <iostream>

using namespace std;

int main()
{
    int girl,item;
    std::cout << "Enter the number of girls:" << std::endl;
    std::cin >> girl;
    std::cout << "Enter the number of item:" << std::endl;
    std::cin >> item;
    int value[girl][item];
    int girls_total[girl],item_total[item];
    int i,j,grand_total=0;
    cout<<"Enter the values of the product one by one:"<<endl;
    for(i=0;i<girl;i++)
    {
        for(j=0;j<item;j++)
        {
            cin>>value[i][j];
        }
    }
    for(i=0;i<girl;i++)
    {
        girls_total[i]=0;
        for(j=0;j<item;j++)
        {
            girls_total[i]=value[i][j]+girls_total[i];
            
        }
        cout<<(i+1)<<" girl total="<<girls_total[i];
        cout<<endl;
    }
    cout<<endl;
    for(j=0;j<item;j++)
    {
        item_total[j]=0;
        for(i=0;i<girl;i++)
        {
            item_total[j]=value[i][j]+item_total[j];
            
        }
        cout<<(j+1)<<" item total="<<item_total[j];
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<girl;i++)
    {
        grand_total=grand_total+girls_total[i];
    }
    cout<<"Grand total is:"<<grand_total;
    
    return 0;
}
