#include <iostream>
using namespace std;
void gotoxy(int x,int y);
void printmaze();

main()
{
        system ("cls");
        printmaze();
                     

}

void printmaze()
{

 cout<<"#############################";
 cout<<"#                           #";
 cout<<"#                           #";
 cout<<"#                           #";
 cout<<"#                           #";
 cout<<"#                           #";
 cout<<"#                           #";
 cout<<"#                           #";
 cout<<"#                           #";
 cout<<"#                           #";
 cout<<"#############################";
}


void gotoxy(int x, int y)

{

COORD coordinates;

coordinates.X = x;

coordinates.Y = y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
 