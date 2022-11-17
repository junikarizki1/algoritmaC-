#include <iostream>
#include <iomanip>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    cout <<"Tampilan tanpa menggunakan setfill()" <<endl;
    cout <<setw(4) <<1 <<endl <<endl; 
    cout <<"Tampilan menggunakan setfill('*')" <<endl;
    cout <<setfill('*') <<setw(4) <<1 <<endl;
    
    return 0;
}
