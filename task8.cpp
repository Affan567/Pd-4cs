#include <iostream>
using namespace std;
void printmenu();
void calculate_agg ( float marks_matric,float marks_inter, float marks_ecat);
void compareMarks  ( string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2);

main()
{
                   printmenu();
                   float m,i,e;
                   cout<<"Enter Marks in Matric: ";
                   cin>>m;
                   cout<<"Enter Marks in Inter: ";
                   cin>>i;
                   cout<<"Enter Marks in Ecat: ";<<endl;
                   cin>>e;
                   calculate_agg( m,i,e);
                   string n1,n2;
                   int m1,m2;
                   cout<<"Enter name of first student: ";
                   cin>>n1;
                   cout<<"Enter name of second student: ";
                   cin>>n2;
                   cout<<"Enter ecat marks of student one: ";
                   cin>>m1;
                   cout<<"Enter ecat marks of student two: ";
                   cin>>m2;
                   compareMarks( n1 , m1,n1, m2);
                   
                  
                   
}

void calculate_agg ( float marks_matric,float marks_inter, float marks_ecat)
{
                  float aggregate;
                  aggregate = (marks_matric/1100 * 0.30) + (marks_inter/570 *0.30)+ (marks_ecat/400 * 0.40);
                  aggregate = aggregate * 100;
                  cout<<"The aggregate is :"<<aggregate; 
}
 

void compareMarks  (string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)

{
                   if (  ecatMarksStd1 > ecatMarksStd2)
                   {
                       cout <<nameStd1<< " Roll no is 1";
                   }
                   else
                       {
                           cout <<nameStd2<< " Roll no is 1";
                       }
}

void printmenu()
{
                  cout<<"#        #                         #####                      #######"<<endl;
                  cout<<"#        #                         #                             #   "<<endl;
                  cout<<"#        #                         #####                         #   "<<endl;
                  cout<<"#        #                         #                             #   "<<endl;
                  cout<<"  ######                           #####                         #   "<<endl;                                      
}