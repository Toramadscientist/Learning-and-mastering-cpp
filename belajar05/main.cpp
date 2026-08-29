#include <iostream>
#include <array> 
using namespace std;

const size_t reprearrayarray = 5;

void representasi (array <int, reprearrayarray> &angka){
		cout << "nilai bahasa indo     :" <<angka[0] << ": " << &angka << endl;
		cout << "nilai bahasa ipa      :" <<angka[1] << ": " << &angka << endl;
		cout << "nilai bahasa agama    :" <<angka[2] << ": " << &angka << endl;
		cout << "nilai bahasa mtk      :" <<angka[3] << ": " << &angka << endl;
		cout << "nilai bahasa binggris :" <<angka[4] << ": " << &angka << endl;
	}


 int main(){
 	array <int, 5> nilaimurid = {0,0,0,0,0};
 	representasi(nilaimurid);


 	return 0;
 }