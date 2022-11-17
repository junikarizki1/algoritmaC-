#include <iostream>
#include <iomanip>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    cout <<setiosflags(ios :: showbase | ios :: uppercase);
    cout <<"Penggunaan ios :: showbase dan ios :: uppercase sekaligus " <<endl;
    cout <<"123 dalam heksadesimal --> " <<hex <<123 <<endl;
    
    
  return 0;
}
