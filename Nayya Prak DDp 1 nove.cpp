#include <iostream>
using namespace std;
int main (){
	
	int n, cari;
	bool ketemu = false;
	
	cout << "Input Jumlah Angka : ";
	cin >> n;
	cout << endl;
	
	
	int list_data[n];
	for(int i=1; i<=n; n++){
		cout <<"Input Data Ke - " << i << " : ";
	}
	cout << endl;
	cout <<"Input Bilangan yang di cari : ";
	cin >> cari;
	cout << endl;
	
	for (int i=0; i<=n; i++){
		if(list_data[i]==cari){
			ketemu = true;
			cout <<"Data ditemukan pada index ke- " << i << endl;
		}
	}
		if(ketemu==false){
			cout << "Data Tidak ditemukan ";
		
	}
	return 0;
	
}
