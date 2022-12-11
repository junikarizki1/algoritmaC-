#include <iostream>
using namespace std;
int main() {

//Looping, jika bernilai True maka akan dieksekuli
cout <<"Looping menggunakan While\n";
cout <<"Created By Junika Rizki\n";
cout <<"==============================\n\n";

    int y=8;
    while (y>=2) {
        cout <<y <<" ";
        y--;
    } cout <<endl;

    y=3;
    while (y<=21) {
        cout <<y <<" ";
        y+=3;
    } cout <<endl;

    y=40;
    while (y>=20) {
       cout <<y <<" ";
        y-=4;
    }  cout <<endl;

     y=5;
    while (y<=45) {
        cout <<y <<" ";
        y+=5;
    } cout <<endl;

    y=90;
    while (y>=0) {
       cout <<y <<" ";
        y-=10;
    }  cout <<endl;

    int n;
    cout <<"Masukkan Nilai n ";
    cin >>n;
    y=2;
    while (y<=n) {
        cout <<y <<" ";
        y+=2;
    } cout <<endl;

    return 0;
}
