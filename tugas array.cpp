#include <iostream>
using namespace std;
int main () {

cout <<"Program Menghitung Rekapitulasi Kehadiran Mahasiswa\n";
cout <<"Created By Junika Rizki\n";
cout <<"==============================\n\n";

int jmlMhs, hdrDsn;
char nama[50];
string namaMhs [50];
string nim[50];
double hdrMhs[50];
double nAk[50];

cout <<"Masukkan Jumlah Siswa ";
cin >>jmlMhs;
cout <<"Masukkan Total Hadir Dosen ";
cin >>hdrDsn;
cout <<endl<<endl;

for (int x=0; x <jmlMhs; x++) {
    cout <<"NIM ";
    cin >>nim[x];
    cout <<"Nama Mahasiswa ";
    cin.ignore();
    cin.getline(nama, sizeof (nama));
    namaMhs[x] = nama;
    cout <<"Total Hadir Mahasiswa ";
    cin >>hdrMhs[x];
    nAk[x] = hdrMhs[x] / hdrDsn * 10;
    cout <<endl;
}

cout <<"REKAPITULASI KEHADIRAN MAHASISWA \n";
cout <<"============================================================== \n";
cout <<"NO   NIM   NAMA MAHASISWA    TOTAL HADIR    NILAI AK    STATUS \n";
cout <<"============================================================== \n";

for (int x =1; x <jmlMhs; x++){
    cout <<x <<"  ";
    cout <<namaMhs[x];

}
return 0;
}
