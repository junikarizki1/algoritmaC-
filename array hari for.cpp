#include <iostream>
using namespace std;
int main() {
string days [10];
cout <<"Menggunakan For Loop \n\n";
for (int x=0; x<7; x++){
    cout <<"Inputkan Hari ";
    cin >>days[x];
}
cout <<endl<<endl;
for (int x=0; x<7; x++){
    cout <<days[x] <<" ";
}
    return 0;
}
