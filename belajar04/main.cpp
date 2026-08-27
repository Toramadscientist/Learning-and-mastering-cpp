#include <iostream>
#include <array>
#include <algorithm>
const size_t seluruharray = 1;


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
	std::array <int, 1> arrayangka = {0};
	std::array <char, 1> arrayhuruf = {'a'};
	int angka;
	char huruf;

	std::cin >> angka;
	std::cin >> huruf;

	arrayangka : angka;
	arrayhuruf : huruf;

	/* std::sort (arrayangka.begin(), arrayangka.end());
	std::sort (arrayhuruf.begin(), arrayhuruf.end()); */
	ngurusinAngka(arrayangka);
	ngurusinHuruf(arrayhuruf); 

	return 0; 
}

