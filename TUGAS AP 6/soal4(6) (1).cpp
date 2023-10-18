#include <iostream>

using namespace std;

int main()
{
  cout << "##  Program C++ Hitung Faktorial ##" << endl;
  cout << endl;

  int angka,hasil,i;

  cout << "Input angka: ";
  cin >> angka;

  cout << angka <<"! = ";

  hasil = 1;
  for(i=1;i<=angka;i++) {
    hasil = hasil * i;

    // untuk menampilkan angka
    cout << i;
    if(i != angka) {
      cout << " * ";
    }
  }
  cout << " = " << hasil;
  cout << endl;

  return 0;
}