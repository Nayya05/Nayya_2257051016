#include <iostream>
using namespace std;
int main (){
	
	char oprasi;
	double angka1,angka2;
	
	cout << " Masukkan Operator (+,-,*,/): ";
	cin >> oprasi;
	
	cout << " Masukkan angka pertama : ";
	cin >> angka1;
	
	cout << "Masukkan angka kedua : ";
	cin >> angka2;
	
	double hasil;
	
	switch(oprasi) {
		case '+':
			hasil = angka1 + angka2;
			break;
		case '-':
			hasil = angka1 - angka2;
			break;
		case '*':
			hasil = angka1 * angka2;
			break;
		case '/':
			hasil = angka1 / angka2;
			break;
		default:
			cout << " Operator Tidak Valid";
			return 0;
		
	}
	cout << "hasil : " << hasil;
	
	return 0;
}
