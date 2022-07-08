#include <iostream>  
int main()  
{  
  const char *names[5] = {"john",  "Peter",  "Marco",  "Devin",  "Ronan"};  

    for(int i=0;i<5;i++)  
    {  
        std::cout << names[i] << std::endl;  
    }  
    return 0;  
}  