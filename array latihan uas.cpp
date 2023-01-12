#include <iostream>

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
   for (int x=1; x<=jmlMhs; x++){
   cout <<x <<" Nama : "<<namaMhs[x] <<" IPK : "<<ipk[x] <<" sks : "<<sks[x] <<endl;
   };
   cout <<"Rata- rata = "<<rata;
   cout <<"\nNilai Tertinggi = "<<max;
   cout <<"\nIPK >=3 = "<<ipk3;
   cout <<"\nMahasiswa Yang perlu dibina = "<<min;
   return 0;
}
