#include <iostream>
#include <iomanip>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    cout <<"Tanpa penggunaan ios " <<endl;
    cout <<"123.45 --> " <<123.45 <<endl;
    cout <<"12345 --> " <<12345 <<endl;
    
    //seting ios
    cout <<setiosflags(ios :: scientific); //set ios scientific
    cout <<"Menggunakan ios :: scientific " <<endl;
    cout <<"123.45 --> "<<123.45 <<endl;
    cout <<"12345 --> " <<12345 <<endl; 
    cout <<setiosflags(ios :: fixed); //set ios fixed
    cout <<"Menggunakan ios :: fixed " <<endl;
    cout <<"123.45 --> "<<123.45 <<endl;
    cout <<"12345 --> " <<12345 <<endl; 
    
  return 0;
}
