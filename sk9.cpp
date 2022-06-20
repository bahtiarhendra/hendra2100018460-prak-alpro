#include <iostream>
using namespace std;

class rak {
public:
  void input();
  void sort();
  void convert2d();

private:
  int array1d[24];
  int array2d[4][6];
  int y = 0;
};

void rak::input() {
  system("cls");
  cout << "Masukkan nomor buku : " << endl;
  for (int i = 0; i < 24; i++) {
    cout << "Data [" << i + 1 << "] = ";
    cin >> array1d[i];
  }
  system("cls");
  cout << "Nomor buku yang telah didaftarkan : \n" << endl;
  for (int i = 0; i < 24; i++) {
    cout << array1d[i] << " ";
  }
}

void rak::sort() {
  for (int i = 0; i < 24; i++) {
    for (int j = 0; j < 24; j++) {
      if (array1d[i] < array1d[j]) {
        int x = array1d[i];
        array1d[i] = array1d[j];
        array1d[j] = x;
      }
    }
  }
  cout << "\n\nNomor buku yang telah diurutkan : \n" << endl;
  for (int i = 0; i < 24; i++) {
    cout << array1d[i] << " ";
  }
}

void rak::convert2d() {
  cout << "\n\nSemua buku sudah masuk ke 4 rak yang berbeda" << endl;
  for (int i = 0; i < 4; i++) {
    cout << "\nRak ke-" << i + 1 << " : ";
    cout << "\n";
    if (y == 24) {
      break;
    }
    for (int j = 0; j < 6; j++) {
      array2d[i][j] = array1d[y];
      cout << array2d[i][j] << "\t";
      y++;
    }
  }
}

int main() {
  rak rak1;
  rak1.input();
  rak1.sort();
  rak1.convert2d();
  return 0;
}
