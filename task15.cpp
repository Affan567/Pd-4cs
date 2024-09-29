#include <iostream>
using namespace std;
void pet(int holidays);
main()
{
                   int h;
                   cout<<"Holidays: "; 
                   cin>>h;
                   pet( h);
                   
}


void pet(int holidays)
{
             int wd, t, difference,diff_norm_hours,diff_norm_mins; 
             wd = 365 - holidays; 
             t = wd * 63 + holidays * 127;
             if ( 30000 >= t)
             {
                cout<<"Tom can sleep well"<<endl;
                difference = 30000 - t;
                diff_norm_hours = difference / 60;
                diff_norm_mins = difference % 60;
                cout <<diff_norm_hours<<"hours"<<diff_norm_mins<<"mins"<<"for play"; 
                 
             }
             else 
             {
               cout<<"Tom will run away"<<endl;
               difference = t - 30,000;
               diff_norm_hours = difference / 60;
               diff_norm_mins = difference % 60;
               cout <<diff_norm_hours<<"hours"<<diff_norm_mins<<"mins"<<" less for play";
             }              

}