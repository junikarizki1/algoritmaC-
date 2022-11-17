#include <iostream>
#include <iomanip>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  //Penggunaan ios showbase
  cout <<"Tanpa ios showbase :: --> " <<hex <<24 <<endl;
  cout <<"Dengan ios showbase :: --> " <<setiosflags(ios :: showbase) <<hex <<24 <<endl;
  
  //Mengembalikan setingan ke semula
  cout <<resetiosflags(ios :: showbase);
  
 //Penggunaan ios showpoint
  cout <<"Tanpa ios showpoint :: --> << " <<12.00 <<endl;
  cout <<setiosflags(ios :: showpoint);
  cout <<"Dengan ios showpoint :: --> << " <<12.00 <<endl;
  
  /*
  //Cara pendek
  cout <<"Tanpa ios showpoint :: --> << " <<12.00 <<endl;
  cout <<"Dengan ios showpoint :: --> << " <<setiosflags(ios :: showpoint) <<12.00 <<endl;*/

    
  return 0;
}
