#include <iostream>
#include <windows.h>
using namespace std;


void gotoxy(int x, int y);
void printmaze ();
void moveplayer( int x,int y);




main()
{
      int x=4, y=4;
      system("cls");
      printmaze();
      while(true)
      {
            
            moveplayer(x,y);
            cout<<"P";
            Sleep(200);
            moveplayer(x,y);
            cout<<" ";
            x=x+1;
            if (x==21)
            {
                  x=4;
            }
     }
      
      

}

void printmaze ()
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



void moveplayer( int x,int y)

{

   gotoxy(x,y);
}




 

