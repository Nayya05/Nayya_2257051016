#include <iostream>
using namespace std;

void myFunction (string name);
int main (){
	myFunction("Raziq");
	myFunction("Vdya");
	myFunction("Ramadhan");
	return 0;
}

void myFunction(string name){
	cout << "Nama saya adalah : "<< name << endl;
}
