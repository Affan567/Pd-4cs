#include <iostream>
using namespace std;
void checkSpeed(int speed);
main()

{
    int v;
    cout<<"Enter speed";  
    cin>>v;
    checkSpeed(v);
}

void checkSpeed(int speed)

{
     if (speed <= 100)
     {
        cout<<"Perfect! You’re going good."; 
     }
    else
     {
       cout<<"Halt... YOU WILL BE CHALLENGED!!!";
     }
}