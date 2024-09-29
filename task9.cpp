#include <iostream>
using namespace std;
void numbers(int a,int b);
main()
{ 
    int num1 , num2;
    cout<<"Enter first Number: ";
    cin>> num1;
    cout<<"Enter second Number: ";
    cin>> num2;
    numbers(num1 , num2);
}

void numbers(int a,int b)
{
   if (a>b)
   {
     cout<<"True";  
   }
   else
   {
     cout<<"False";
   }
}
               
