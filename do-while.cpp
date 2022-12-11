#include <iostream>
using namespace std;
int main() {
    
cout <<"Looping menggunakan Do While\n";
cout <<"Created By Junika Rizki\n";
cout <<"==============================\n\n";
    
    int i;
    i = 8;
    do {
        cout <<i <<" ";
        i--;
    }
    while (i >=2);
    cout <<endl;

    i = 3;
    do {
        cout <<i <<" ";
        i+=3;
    }
    while (i <=21);
    cout <<endl;
    
    i = 40;
    do {
        cout <<i <<" ";
        i-=4;
    }
    while (i >=20);
    cout <<endl;
    
    i = 5;
    do {
        cout <<i <<" ";
        i +=5;
    }
    while (i <=45);
    cout <<endl;
    
    i = 90;
    do {
        cout <<i <<" ";
        i -=10;
    }
    while (i >=0);
    cout <<endl;
    
    int n;
    cout <<"Masukkan nilai n ";
    cin >>n;
    i = 2;
    do {
        cout <<i <<" ";
        i +=2;
    }
    while (i <=n);
    return 0;
}
