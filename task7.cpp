#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void moveplayer(int x,int y);

main ()
{
  int x=3,y=4;
  
   system ("cls");
   printmaze();
   while(true)
  {
   
   moveplayer(x,y);
   y = y+1;
   if (y==10)
   {
     y = 4;
   }
       
   gotoxy(0,10);
}
                   
 
}

void printmaze()
{
 cout<<"#############################"<<endl;
 cout<<"#                           #"<<endl;
 cout<<"#                           #"<<endl;
 cout<<"#                           #"<<endl;
 cout<<"#                           #"<<endl;
 cout<<"#                           #"<<endl;
 cout<<"#                           #"<<endl;
 cout<<"#                           #"<<endl;
 cout<<"#                           #"<<endl;
 cout<<"#                           #"<<endl;
 cout<<"#############################"<<endl;
}

void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}


void moveplayer(int x, int y)
{
  gotoxy(x,y);
  cout<<"P";
  Sleep (300);
  gotoxy(x,y);
  cout<<" ";


}