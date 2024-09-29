#include <iostream>
using namespace std;
void possible_bonus (int your_position, int friends_position );
main()
{
                   int yours,friends;
                   cout<<"Enter your position: ";
                   cin>>yours;
                   cout<<"Enter friends position: ";
                   cin>>friends;
                   possible_bonus( yours, friends);
                   

}
 
void possible_bonus (int your_position, int friends_position )
{
      if (friends_position - your_position <= 6)
         
            {
                cout<<"True";
              }
      else
             {
                 cout<<"False";
                 }
       

}