#include <iostream>
using namespace std;
int main(){
    int b;
    int c=0;
string hari[] = {"senin", "selasa", "rabu", "kamis", "jum'at", "sabtu", "minggu"};
    cout <<"Menggunakan For Loop\n";
    for (int a=0; a<7; a++){
        cout <<hari[a] <<"  ";
    }
    cout <<endl<<endl;
    
    cout <<"Menggunakan While Loop\n";
    while (b<7) {
        cout <<hari[b] <<"  ";
        b++;
    }cout <<endl<<endl;
    
    cout <<"Menggunakan Do While Loop\n";
    do {
        cout <<hari[c] <<"  ";
        c++;
    }while (c<7);
    return 0;
}
