/*
Persegi Panjang
-> Keliling = 2 * ( panjang + lebar )
-> Luas     = panjang * lebar
*/

#include <iostream>

using namespace std;

int main() {
  int panjang, lebar, luas, keliling;
  
  cout << "Kalkulator Persegi Panjang\n";
  cout << "Masukkan Nilai Panjang : ";
  cin >> panjang;
  cout << "Masukkan Nilai Lebar : ";
  cin >> lebar;

  keliling = 2 * ( panjang + lebar );
  luas = panjang * lebar;

  cout << "Keliling = " << keliling << "\n";
  cout << "Luas = " << luas << "\n";
}
