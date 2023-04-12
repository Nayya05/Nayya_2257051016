#include <iostream>
#include <cstring> // untuk menggunakan cstring

using namespace std;

// membuat struct untuk nilai mata kuliah
struct MataKuliah {
  char nama[50]; // nama mata kuliah
  int sks; // jumlah sks
  char nilai[2]; // nilai yang diperoleh
};

// fungsi untuk menghitung bobot nilai berdasarkan huruf mutu
float hitungBobotNilai(char nilai[]) {
  float bobot;
  if (strcmp(nilai, "A") == 0) {
    bobot = 4.0;
  } else if (strcmp(nilai, "AB") == 0) {
    bobot = 3.5;
  } else if (strcmp(nilai, "B") == 0) {
    bobot = 3.0;
  } else if (strcmp(nilai, "BC") == 0) {
    bobot = 2.5;
  } else if (strcmp(nilai, "C") == 0) {
    bobot = 2.0;
  } else if (strcmp(nilai, "D") == 0) {
    bobot = 1.0;
  } else {
    bobot = 0.0;
  }
  return bobot;
}

// fungsi untuk menghitung IPK
float hitungIPK(MataKuliah *nilai, int jumlahMatkul) {
  float totalBobot = 0;
  int totalSKS = 0;
  for (int i = 0; i < jumlahMatkul; i++) {
    float bobot = hitungBobotNilai(nilai[i].nilai);
    totalBobot += bobot * nilai[i].sks;
    totalSKS += nilai[i].sks;
  }
  float ipk = totalBobot / totalSKS;
  return ipk;
}

int main() {
  int jumlahMatkul;
  cout << "Masukkan jumlah mata kuliah: ";
  cin >> jumlahMatkul;

  // alokasi memory untuk array struktuk MataKuliah
  MataKuliah *nilai = new MataKuliah[jumlahMatkul];

  for (int i = 0; i < jumlahMatkul; i++) {
    cout << "Mata kuliah ke-" << i+1 << endl;
    cout << "Nama mata kuliah: ";
    cin.ignore(); // mengabaikan karakter newline (\n) dari input sebelumnya
    cin.getline(nilai[i].nama, 50);
    cout << "Jumlah SKS: ";
    cin >> nilai[i].sks;
    cout << "Nilai: ";
    cin >> nilai[i].nilai;
  }

  // hitung IPK menggunakan fungsi hitungIPK
  float ipk = hitungIPK(nilai, jumlahMatkul);

  // tampilkan hasil
  cout << "IPK Anda adalah " << ipk << endl;

  // dealokasi memory array nilai
  delete[] nilai;

  return 0;
}
