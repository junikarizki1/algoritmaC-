#include <iostream>
#include <iomanip>
using namespace std;
int main () {

cout <<"Program Menghitung Rekapitulasi Kehadiran Mahasiswa\n";
cout <<"Created By Junika Rizki\n";
cout <<"====================================================================================\n\n";

int jmlMhs, hdrDsn, tdkUjian=0,min;
float jml, rata;
char nama[50];
string namaMhs [50];
string nim[50];
double hdrMhs[50];
double nAk[50];
string status[50];

cout <<"Masukkan Jumlah Siswa ";
cin >>jmlMhs;
cout <<"Masukkan Total Hadir Dosen ";
cin >>hdrDsn;
cout <<endl<<endl;

for (int x=1; x <=jmlMhs; x++) {
    cout <<"NIM ";
    cin >>nim[x];
    cout <<"Nama Mahasiswa ";
    cin.ignore();
    cin.getline(nama, sizeof (nama));
    namaMhs[x] = nama;
    cout <<"Total Hadir Mahasiswa ";
    cin >>hdrMhs[x];
    cout <<endl;
    nAk[x] = hdrMhs[x] / hdrDsn * 10;
    cout <<endl;
    if (nAk[x] >=7.5){
        status[x] = "Ikut ujian ";
    }else {status[x] = "Tidak Ikut Ujian ";
    tdkUjian +=1;}
    jml += nAk[x];
    min = nAk[x];
    if (nAk[x] < min) {
        min = nAk[x];
    }
}
rata = jml / jmlMhs;

cout << "REKAPTULASI KEHADIRAN MAHASISWA" << endl;
    cout <<"====================================================================================\n";
    cout << setiosflags(ios::left);
    cout << "NO" << setw(15) << "   NIM" << setw(15) << "  NAMA MAHASISWA" << setw(15) << "  TOTAL HADIR" << setw(10) << "  NILAI AK        STATUS" << endl;
    cout <<"====================================================================================\n";
    for (int x = 1; x <= jmlMhs; x++) {
        cout << setiosflags(ios::left);
        cout << x << "    " << setw(10) << nim[x] << "       " << setw(15) << namaMhs[x] << "   " << setw(10) << hdrMhs[x] << "  " << setw(10) << setprecision(2) << nAk[x] << status[x] << endl;
}

    cout <<"\nRATA-RATA NILAI AK = "<<rata;
    cout <<"\nTOTAL HADIR PALING RENDAH = "<<min <<" KALI";
    cout <<"\nJUMLAH MHS TIDAK IKUT UJIAN = "<<tdkUjian <<" ORANG";
return 0;
}
