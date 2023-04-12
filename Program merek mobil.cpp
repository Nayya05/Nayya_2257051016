#include <iostream>
#include <cstring>

using namespace std;

// Deklarasi class
class Mobil {
    private:
        string merk;
        int tahun;
    public:
        Mobil(string merk, int tahun) {
            this->merk = merk;
            this->tahun = tahun;
        }
        void info() {
            cout << "Merk mobil: " << merk << endl;
            cout << "Tahun produksi: " << tahun << endl;
        }
};

// Deklarasi function
int tambah(int a, int b) {
    return a + b;
}

// Deklarasi struct
struct Mahasiswa {
    string nama;
    int nim;
};

// Deklarasi pointer dan cstring
int main() {
    char nama[100];
    strcpy(nama, "John Doe");
    char *ptr = nama;

    cout << "Nama mahasiswa: " << ptr << endl;

    Mahasiswa mhs;
    mhs.nama = "Jane Doe";
    mhs.nim = 12345;

    cout << "Nama mahasiswa: " << mhs.nama << endl;
    cout << "NIM mahasiswa: " << mhs.nim << endl;

    Mobil mobil1("Toyota", 2020);
    mobil1.info();

    int hasil = tambah(10, 20);
    cout << "Hasil penjumlahan: " << hasil << endl;

    return 0;
}
