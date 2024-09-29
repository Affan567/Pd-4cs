#include <iostream>
using namespace std;
void longest_duration(int hours,int mins);
main()

{
                    int h,m;
                    cout<<"Enter number of hours: ";
                    cin>>h;
                    cout<<"Enter number of minutes: ";
                    cin>>m;
                    longest_duration(h,m);                    

}

void longest_duration(int hours,int mins)
{
             if (mins < 60  )
             {
                cout<<hours;
             }
             else
             {
                cout<<mins;
             } 
}