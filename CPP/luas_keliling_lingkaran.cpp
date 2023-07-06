/*
Lingkaran
-> Keliling = 2 * pi * radius
-> Luas     = pi * radius * radius
-> pi       = 22 / 7
-> radius   = diameter / 2
*/

#include <iostream>

using namespace std;

int main() {
  double radius, pi, luas, keliling;
  pi = 22.0 / 7.0;
  cout << "Kalkulator Lingkaran\n";
  cout << "Masukkan Nilai Jari-Jari : ";
  cin >> radius;

  keliling = 2.0 * pi * radius;
  luas = pi * radius * radius;

  cout << "Keliling = " << keliling << "\n";
  cout << "Luas = " << luas << "\n";
}
