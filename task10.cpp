#include <iostream>
using namespace std;
void reverse (string TF);
main()
{
                    string input;
                    cout<<"Enter 'True' or 'False': ";
                    cin>>input;
                    reverse (input);

}



void reverse (string TF)
{
                     if (TF == "True" )
                     {
                        cout<<"False";
                     } 
                    else
                     {
                      cout<<"True";
                     }
}