//swap 2 numbers without using 3rd variable with Pointer 
#include <iostream>  
using namespace std;  
int main()  
{  
    int a=20,b=10,*p1=&a,*p2=&b;    
    cout<<"Before swap: a="<<*p1<<" b="<<*p2<<endl;    
    *p1=*p1+*p2;//20+10=30    
    *p2=*p1-*p2;//30-10=20
    *p1=*p1-*p2;//30-20=10
    cout<<"After swap: a="<<*p1<<" b="<<*p2<<endl;    
    return 0;  
}  
// //swap 2 numbers without using 3rd variable without Pointer 
// #include <iostream>  
// using namespace std;  
// int main()  
// {  
//     int a=20,b=10,*p1=&a,*p2=&b;    
//     cout<<"Before swap: a="<<*p1<<" b="<<*p2<<endl;    
//     a=a+b;//20+10=30    
//     b=a-b;//30-10=20
//     a=a-b;//30-20=10
//     cout<<"After swap: a="<<*p1<<" b="<<*p2<<endl;    
//     return 0;  
// }  