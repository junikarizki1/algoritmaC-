#include <iostream>
using namespace std;
int main () {

cout <<"Looping menggunakan For\n";
cout <<"Created By Junika Rizki\n";
cout <<"==============================\n\n";
 
 for (int i = 8; i >=2; i--) {
    cout << i << " ";
  } cout <<endl;
 
  for (int i = 3; i<=21; i+= 3) {
      cout <<i <<" ";
  } cout <<endl;
  
  for (int i = 40; i >=20; i-= 4) {
      cout <<i <<" ";
  } cout <<endl;
  
  for (int i = 5; i <=45; i+= 5) {
      cout <<i <<" ";
  } cout <<endl;
  
  for (int i = 90; i >=0; i-=10) {
      cout <<i <<" ";
  } cout <<endl;
  
  int n;
  cout <<"Masukkan nilai n ";
  cin >>n;
  for (int i = 2; i <=n; i+= 2) {
      cout <<i <<" ";
  } cout <<endl;
  
  
  
    return 0;
}
