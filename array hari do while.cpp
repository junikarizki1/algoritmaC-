#include <iostream>
using namespace std;
int main() {
string days [10];
int x=0;
do {
    cout <<"Inputkan Hari ";
    cin >>days[x];
    x++;
}while (x<7);
x=0;
do {
    cout <<days[x] <<" ";
    x++;
}while (x<7);
    return 0;
}
