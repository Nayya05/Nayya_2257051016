#include <iostream>
#include <cstring>

using namespace std;

// membuat struct untuk data mahasiswa
struct Mahasiswa {
  char nama[50];
  int umur;
  char jurusan[50];
};

// membuat class untuk mengelola data mahasiswa
class DataMahasiswa {
  private:
    Mahasiswa *mahasiswa;
    int jumlahMahasiswa;
  public:
    // constructor
    DataMahasiswa() {
      mahasiswa = NULL;
      jumlahMahasiswa = 0;
    }
    // destructor
    ~DataMahasiswa() {
      if (mahasiswa != NULL) {
        delete[] mahasiswa;
      }
    }
    // function untuk menambah data mahasiswa
    void tambahMahasiswa() {
      Mahasiswa m;
      cout << "Masukkan nama mahasiswa: ";
      cin.getline(m.nama, 50);
      cout << "Masukkan umur mahasiswa: ";
      cin >> m.umur;
      cin.ignore();
      cout << "Masukkan jurusan mahasiswa: ";
      cin.getline(m.jurusan, 50);
      // menambahkan mahasiswa ke array
      if (mahasiswa == NULL) {
        mahasiswa = new Mahasiswa[1];
      } else {
        Mahasiswa *temp = new Mahasiswa[jumlahMahasiswa + 1];
        memcpy(temp, mahasiswa, sizeof(Mahasiswa) * jumlahMahasiswa);
        delete[] mahasiswa;
        mahasiswa = temp;
      }
      mahasiswa[jumlahMahasiswa] = m;
      jumlahMahasiswa++;
    }
    // function untuk menampilkan data mahasiswa
    void tampilkanMahasiswa() {
      cout << "Data Mahasiswa:" << endl;
      for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Umur: " << mahasiswa[i].umur << endl;
        cout << "Jurusan: " << mahasiswa[i].jurusan << endl;
      }
    }
};

int main() {
  DataMahasiswa dm;
  int pilihan = 0;
  while (pilihan != 3) {
    cout << "Menu:" << endl;
    cout << "1. Tambah Data Mahasiswa" << endl;
    cout << "2. Tampilkan Data Mahasiswa" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilihan Anda: ";
    cin >> pilihan;
    cin.ignore();
    switch (pilihan) {
      case 1:
        dm.tambahMahasiswa();
        break;
      case 2:
        dm.tampilkanMahasiswa();
        break;
      case 3:
        cout << "Terima kasih!" << endl;
        break;
      default:
        cout << "Pilihan tidak valid" << endl;
        break;
    }
  }
  return 0;
}
