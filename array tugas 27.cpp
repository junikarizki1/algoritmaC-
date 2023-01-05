#include <iostream>
using namespace std;
int main(){
    float max=0;
    int angka[10];
    for (int x=0; x<10; x++) {
        cout <<"Masukkan Angka Ke "<<"["<<x+1<<"] ";
        cin >>angka[x];
        if (angka[x] > max){
            max = angka[x];
        }
    }
    cout <<"Angka Terbesar = "<<max;
    return 0;
}
