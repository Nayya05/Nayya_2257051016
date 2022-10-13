#include <iostream>
using namespace std;
int main (){
	
//	string nama= " adam";
//	
//	cout << nama [0] << endl;
//	cout << nama [1] << endl;
//	cout << nama [2] << endl;
//	cout << nama [3] << endl;
//	
	
	// array
	
//	int nilai [5];
//	
//	nilai [0]=10;
//	nilai [1]=20;
//	nilai [2]=30;
//	nilai [3]=40;
//	nilai [4]=50;
//	
//	cout << "Nilai ke-1 :" << nilai [0] << endl;
//	cout << "Nilai ke-2 :" << nilai [1] << endl;
//	cout << "Nilai ke-3 :" << nilai [2] << endl;
//	cout << "Nilai ke-4 :" << nilai [3] << endl;
//	cout << "Nilai ke-5 :" << nilai [4] << endl;
//	
//	// mencetak isi array dengan perulangan 
//	for (int i=0; i < 5; i++){
//		cout << "Nilai ke-"<<i<<"="<< nilai [i]<< endl;
//	}

     int a[] = {10,20,45,67,89,90,23,56,78,90};
     cout << sizeof (a) << endl;
     cout << sizeof (a[0]) << endl;
     int lenght = sizeof(a)/sizeof (a[0]);
     cout << lenght;
	return 0;
}
