#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    int jmlMhs, sks[50];
    double  jml=0, rata, max=0, min, ipk3=0;
    char nama[50];
    string namaMhs[50];
   double ipk[10];
   cout << "Inputkan Jumlah Mahasiswa : " << endl;
   cin >>jmlMhs;
   
   for (int x =1; x<=jmlMhs; x++){
   cout <<"Inputkan Nama Mahasiswa : "; 
   cin.ignore();
   cin.getline(nama, sizeof(nama)); namaMhs[x] = nama;
   cout <<"Inputkan Nilai IPK      : "; cin >>ipk[x];
   jml+=ipk[x];
   if (ipk[x] > max) {
       max = ipk[x];
   }
   if (ipk[x] >= 3.00 && ipk[x] <=4.0) {
       sks[x] = 24;
       ipk3 +=1;
   }else if (ipk[x] >=2.50 && ipk[x] <=2.99) {
        sks[x] = 21;  
   }else if (ipk[x] >=2.00 && ipk[x] <=2.49) {
       sks[x] = 18;
   }else if (ipk[x] >=1.50 && ipk[x] <=1.99) {
       sks[x] = 15;
       min +=1;
   }else if (ipk[x] >=0.00 && ipk[x] <=1.49) {
       sks[x] = 12;
       min +=1;
   };
   };
   rata= jml / jmlMhs;
   cout <<"\nREKAPITULASI INDEKS PRESTASI MAHASISWA\n";
   cout <<"------------------------------------------------------------------\n";
   cout <<setiosflags(ios::left);
   cout <<setw(5)<<"No" <<setw(25)<<"Nama Mahasiswa"<<setw(15)<<"Nilai IPK"<<setw(15)<<"SKS Smt Berikut"<<endl;
   cout <<"------------------------------------------------------------------\n";
   for (int x=1; x<=jmlMhs; x++){
       cout <<setiosflags(ios::left);
       cout <<setw(5) <<x;
       cout <<setw(25) <<namaMhs[x];
       cout <<resetiosflags(ios::left);
       cout <<setw(5) <<ipk[x];
       cout <<setiosflags(ios::right);
       cout <<setw(18) <<sks[x] <<endl;
       cout <<resetiosflags(ios::right);
    };
    cout <<"------------------------------------------------------------------\n";
   cout <<"\nRata-rata Nilai IPK                     = "<<rata;
   cout <<"\nNilai IPK Tertinggi                     = "<<max;
   cout <<"\nJumlah Mahasiswa dengan IPK >=3.00      = "<<ipk3;
   cout <<"\nJumlah Mahasiswa Yang Perlu Dibina      = "<<min;
   return 0;
}
