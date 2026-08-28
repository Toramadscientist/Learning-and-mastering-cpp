#include <iostream>
#include <array>
#include <algorithm>
const size_t seluruharray = 6;


void ngurusinAngka (std::array <int, seluruharray> &angka){
	for (int &hasil : angka){
		std::cout << hasil << " ";
	}
	std::cout << std::endl;
}

void ngurusinHuruf (std::array <char, seluruharray> &huruf){
	for (char &hasil : huruf){
		std::cout << hasil << " ";
	}
	std::cout << std::endl;
}

int main(){
	std::array <int, 6> arrayangka = {4,1,5,3,0,3};
	std::array <char, 6> arrayhuruf = {'a','d','f','e','c','b'};

	std::sort (arrayangka.begin(), arrayangka.end());
	std::sort (arrayhuruf.begin(), arrayhuruf.end()); 
	
	ngurusinAngka(arrayangka);
	ngurusinHuruf(arrayhuruf); 

	return 0; 
}

