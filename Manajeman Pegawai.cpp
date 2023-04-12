#include <iostream>
#include <cstring>

using namespace std;

class Pegawai {
private:
    char nama[50];
    int umur;
    char alamat[50];
    int gaji;
public:
    void input();
    void display();
    int getGaji();
};

void Pegawai::input() {
    cout << "Masukkan Nama Pegawai: ";
    cin >> nama;
    cout << "Masukkan Umur Pegawai: ";
    cin >> umur;
    cout << "Masukkan Alamat Pegawai: ";
    cin >> alamat;
    cout << "Masukkan Gaji Pegawai: ";
    cin >> gaji;
}

void Pegawai::display() {
    cout << "Nama Pegawai: " << nama << endl;
    cout << "Umur Pegawai: " << umur << endl;
    cout << "Alamat Pegawai: " << alamat << endl;
    cout << "Gaji Pegawai: " << gaji << endl;
}

int Pegawai::getGaji() {
    return gaji;
}

void printDaftarPegawai(Pegawai *pegawaiList, int n) {
    cout << "Daftar Pegawai:" << endl;
    for (int i = 0; i < n; i++) {
        pegawaiList[i].display();
        cout << endl;
    }
}

void printPegawaiDenganGajiTertinggi(Pegawai *pegawaiList, int n) {
    int maxGaji = 0;
    int idxMaxGaji = 0;
    for (int i = 0; i < n; i++) {
        if (pegawaiList[i].getGaji() > maxGaji) {
            maxGaji = pegawaiList[i].getGaji();
            idxMaxGaji = i;
        }
    }
    cout << "Pegawai dengan Gaji Tertinggi:" << endl;
    pegawaiList[idxMaxGaji].display();
}

int main() {
    int n;
    cout << "Masukkan Jumlah Pegawai: ";
    cin >> n;
    
    Pegawai *pegawaiList = new Pegawai[n];
    
    for (int i = 0; i < n; i++) {
        cout << "Pegawai " << i+1 << ":" << endl;
        pegawaiList[i].input();
    }
    
    cout << endl;
    printDaftarPegawai(pegawaiList, n);
    cout << endl;
    printPegawaiDenganGajiTertinggi(pegawaiList, n);
    
    delete [] pegawaiList;
    
    return 0;
}

