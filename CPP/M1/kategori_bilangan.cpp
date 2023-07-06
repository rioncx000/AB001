// Masukkan Bilangan :
// N adalah bilangan (genap,ganjil) (positif,negatif,nol)

#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Masukkan Bilangan : ";
  int N;
  cin >> N;

  string ca1, ca2;

  if (N % 2 == 0) {
    ca1 = "genap";
  }
  else {
    ca1 = "ganjil";
  }

  if (N > 0) {
    ca2 = "positif";
  }
  else if(N < 0) {
    ca2 = "negatif";
  }
  else {
    ca2 = "nol";
  }

  cout << N << " adalah bilangan " << ca1 << " " << ca2;
}
