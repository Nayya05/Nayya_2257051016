#include <iostream>
using namespace std;

int main(){
	int angka[5] = {10,5,15,0,12};
	int temp = 0;
	
	cout << "Array Sebelum disortingt : ";
	for(int i=0; i<5; i++){
		cout <<angka[i]<<" ";
	}
	
	//Proses bubble short
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++){
			if(angka[i] > angka[j] ){
				temp = angka[i];
				angka[i]= angka[j];
				angka[j]= temp;
			}
		}
	}cout<<"\n";
	
	cout << "Array Sesudah disortingt : ";
	for(int i=0; i<5; i++){
		cout<< angka[i]<<" ";
	}
	return 0;
}
