#include <iostream>
using namespace std;

int main() {
    int angka, jumlah;
    cout << "Masukkan angka : ";
    cin >> angka;

  if ( angka < 0){
    cout << "angka tidak oleh negatif ";
  }
    jumlah = 0;
    while( angka != 0){
        
        jumlah += angka % 10;
        angka = angka/10;

        
    }
cout << "jumlah deret nya adalah" << jumlah <<endl;
}