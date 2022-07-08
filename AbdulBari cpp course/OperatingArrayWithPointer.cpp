#include <iostream>  
using namespace std;  
int main()  
{  
    int ptr1[5]; // integer array declaration  
    int *ptr2[5]; // integer array of pointer declaration  
    std::cout << "Enter five numbers :" << std::endl;  
    for(int i=0;i<5;i++)  
    {  
        std::cin >> ptr1[i];  
    }  
    for(int i=0;i<5;i++)  
    {  
        ptr2[i]=&ptr1[i];   
    }  
    // printing the values of ptr1 array
    std::cout << "The values are" << std::endl;  
    for(int i=0;i<5;i++)  
    {  
        std::cout << *ptr2[i] << std::endl;  
    }  
    }  