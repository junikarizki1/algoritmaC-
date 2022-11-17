#include <iostream>
#include <iomanip>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    cout <<setiosflags(ios :: fixed);
    cout <<setprecision(0) <<1.236 <<endl;
    cout <<setprecision(1) <<1.236 <<endl;
    cout <<setprecision(2) <<1.236 <<endl;
    cout <<setprecision(3) <<1.236 <<endl;
    cout <<setprecision(4) <<1.236 <<endl;
    cout <<setprecision(5) <<1.236 <<endl;
    
  return 0;
}
