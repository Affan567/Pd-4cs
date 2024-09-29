#include <iostream>
using namespace std;
void discount( string name, float price );
main()
{
  float p ;
  string n;
  cout<<"Enter ticket price: ";
  cin>>p;
  cout<<"Enter country name: ";
  cin>>n;
  discount(n, p);
  
}


void discount( string name, float price )
{
     float price_after;
     if (name == "pakistan")
        {
               
                 price_after = price * 0.95;
                 cout<<price_after;
                             
         }
     if (name == "india")
     
      {        
               price_after = price * 0.80;
               cout<<price_after;
      }
     if (name == "ireland")
     
      {
               
               price_after = price * 0.90;
               cout<<price_after;
      }
     if (name == "England")
     
      {        
               price_after = price * 0.70;
               cout<<price_after;
      }
     if (name == "canada")
     
      {
                
               price_after = price * 0.55;
                cout<<price_after;
      }
}