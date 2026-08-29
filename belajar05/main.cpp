#include <iostream>
#include <array> 
using namespace std;

const size_t reprearrayarray = 5;

void representasi (array <int, reprearrayarray> &angka){
	for (int &hasil : angka){
		cout << "nilaimurid: " <<hasil << endl;
	}
	cout << endl;
}

 int main(){
 	array <int, 5> nilaimurid = {0,0,0,0,0};
 	representasi(nilaimurid);
 	return 0;
 }