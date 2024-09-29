#include <iostream>
using namespace std;
void flowershop( float redrose , float whiterose , float tulip);
main()
{
          int r,w,t;
          cout<<"Red roses: ";
          cin >>r;
          cout<<"White roses: ";
          cin >>w;
          cout<<"Tulip: ";
          cin>>t;
          flowershop( r , w , t);
}

void flowershop( float redrose ,float whiterose , float tulip)
{
          float op,discount;
          op = redrose * 2 + whiterose * 4.10 + tulip*2.5;
          if (op > 200)
          {
             discount = op * 0.80;
             cout<<"Price after discount"<<discount;
          } 

         else
         {
            cout<<op<<endl;
            cout<<"No discount";
         }
       

}