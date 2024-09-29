#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void alpha1(string h );
void alpha2(string a);
void alpha3(string s);
void alpha4(string n);
main ()

{
               system("cls");
               int x=0, y=0;
               string a,h,s,n;
               gotoxy(0,1);
               alpha1 (h);
               gotoxy(0,2);
               alpha2 (a);
               gotoxy(0,3);
               alpha3 (s);
               gotoxy(0,4);
               alpha3 (s);
               gotoxy(0,5);
               alpha2 (a);
               gotoxy(0,6);
               alpha4 (n);                 
}

void alpha1(string h )
{ 
              cout <<"H";
} 

void alpha2(string a)    
{
              cout<<"A";                
}

void alpha3(string s)
{ 
              cout<<"S";
}

void alpha4(string n)
{
               cout<<"N";
}   

void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}            