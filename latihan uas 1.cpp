#include <iostream>
using namespace std;
int main(){
    int n, jml1=0, jml2=0, jml3=0, nil;
    cout <<"Masukkan Jumlah Data : ";
    cin >>n;
    for (int a=1; a<=n; a++){
        cout <<"Input Bilangan      "<< a<< ": ";
        cin >> nil;
        jml1 +=nil;
    }cout <<endl<<endl;
    cout <<"Menggunakan Looping For\n";
    for (int a=104; a>=64; a-=8){
        cout <<a <<"  ";
    }cout <<endl;
    for (int a=102; a<=144; a+=6){
        cout <<a <<"  ";
    }cout <<endl;
    for (int a=75; a>=0; a-=15){
        cout <<a <<"  ";
    }cout <<endl;
    cout <<"Jumlah Bilangan = "<<jml1;
    cout <<endl<<endl;


    int a=1;
    while (a<=n){
        cout <<"Input Bilangan      "<< a<< ": ";
        cin >> nil;
        jml2 +=nil;
        a++;
    }cout <<endl;
    cout <<"Menggunakan Looping While\n";
    a=104;
    while (a>=64){
        cout <<a <<"  ";
        a-=8;
    }cout <<endl;
    a=102;
    while (a<=144){
        cout <<a <<"  ";
        a+=6;
    }cout <<endl;
    a=75;
    while (a>=0){
        cout <<a <<"  ";
        a-=15;
    }cout <<endl;
    cout <<"Jumlah Bilangan = "<<jml2;
    cout <<endl<<endl;


    a=1;
    do {
        cout <<"Input Bilangan      "<< a<< ": ";
        cin >> nil;
        jml3 +=nil;
        a++;
    }while (a<=n);
    cout <<"Menggunakan Looping Do While\n";
    a=104;
    do {
        cout <<a <<"  ";
        a-=8;
    }while (a>=64);
    cout <<endl;
    a=102;
    do {
        cout <<a <<"  ";
        a+=6;
    }while (a<=144);
    cout <<endl;
    a=75;
    do {
        cout <<a <<"  ";
        a-=15;
    }while (a>=0);
    cout <<endl;
    cout <<"Jumlah Bilangan = "<<jml3 <<endl<<endl;


    return 0;
}
