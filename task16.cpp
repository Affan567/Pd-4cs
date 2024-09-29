#include <iostream>
using namespace std;
void days(int people,int tp);
main ()
{
                    int p,r;
                    cout<<"Enter number of people in the house: ";
                    cin>>p;
                    cout<<"Enter Number of rolls: ";
                    cin>>r;
                    days(p,r);                    



}


void days(int people,int tp)
{
                    int sheets_per_day , sheets_for_rolls ,last_long;
                    sheets_per_day = people * 57;
                    sheets_for_rolls = tp * 500;
                    last_long = sheets_for_rolls / sheets_per_day;
                    
                    if ( last_long >= 14)
                    {
                          cout<<"Your tissue paper will last long for "<< last_long <<"days NO need to panic";
 
                     }
                    else
                    {
                          cout<<"Your tissue paper will last long for "<< last_long <<"days You need to buy more";
                    }
                    


}