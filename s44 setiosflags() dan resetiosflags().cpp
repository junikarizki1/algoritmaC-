#include <iostream>
#include <iomanip>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  cout <<setiosflags(ios :: left);
  cout <<setw(15) <<"nama ";
  cout <<resetiosflags(ios :: left);
  cout <<setw(5) <<"umur " <<endl;
  
  cout <<setiosflags(ios :: left);
  cout <<setw(15) <<"Budi Hartono ";
  cout <<resetiosflags(ios :: left);
  cout <<setw(5) <<15  <<endl;

  cout <<setiosflags(ios :: left);
  cout <<setw(15) <<"Susilawati ";
  cout <<resetiosflags(ios :: left);
  cout <<setw(5) <<21  <<endl;

    
  return 0;
}
